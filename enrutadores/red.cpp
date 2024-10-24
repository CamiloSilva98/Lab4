#include "Red.h"
#include <limits>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
#include <fstream>
#include <sstream>

void Red::loadFromCSV(const string& filename)
{
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: No se pudo abrir el archivo " << filename << endl;
        return;
    }

    string line;
    // Saltar la primera línea (encabezados)
    getline(file, line);

    // Leer cada línea del archivo
    while (getline(file, line)) {
        stringstream ss(line);
        string router1, router2, cost;

        getline(ss, router1, ',');
        getline(ss, router2, ',');
        getline(ss, cost, ',');

        try {
            int costValue = stoi(cost);
            // Agregar los routers si no existen
            if (routers.find(router1) == routers.end()) {
                addRouter(router1);
            }
            if (routers.find(router2) == routers.end()) {
                addRouter(router2);
            }
            // Agregar la conexión entre los routers
            addLink(router1, router2, costValue);
        } catch (const exception& e) {
            cout << "Error en la línea: " << line << endl;
        }
    }
    cout << "Tabla de enrutamiento cargada exitosamente." << endl;
    file.close();
}
// Agregar un enrutador a la red
void Red::addRouter(string id)
{
    routers[id] = Router(id);
}
// Eliminar un enrutador de la red
void Red::removeRouter(string id)
{
    routers.erase(id);
}

// Agregar un enlace bidireccional entre dos enrutadores
void Red::addLink(string router1, string router2, int cost)
{
    routers[router1].addLink(router2, cost);
    routers[router2].addLink(router1, cost);
}

// Imprimir las tablas de enrutamiento de todos los enrutadores en la red
void Red::printRed()
{
    for (const auto& entry : routers)
    {
        entry.second.printRoutingTable();
    }
}
void Red::printConnections(const string& router)
{
    if (routers.find(router) == routers.end())
    {
        cout << "El router " << router << " no existe en la red.\n";
        return;
    }

    cout << "\n-- Conexiones del router " << router << " --\n";

    if (routers[router].routingTable.empty())
    {
        cout << "El router " << router << " no tiene conexiones.\n";
    }
    else
    {
        for (const auto& connection : routers[router].routingTable)
        {
            cout << "Hacia " << connection.first << " - Cuesta: " << connection.second << "\n";
        }
    }
}
// Función para encontrar el camino menos costoso entre dos enrutadores
pair<int, vector<string>> Red::findShortestPath(const string& start, const string& end)
{
    if (routers.find(start) == routers.end() || routers.find(end) == routers.end())
    {
        cout << "Uno de los enrutadores no existe en la red.\n";
        return { -1, {} };
    }

    map<string, int> distances;  // Guarda la distancia más corta a cada enrutador
    map<string, string> previous; // Guarda el predecesor de cada nodo en el camino más corto
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<>> pq;  // Cola de prioridad para Dijkstra
    // Inicializamos las distancias con infinito (o un valor muy grande)
    for (const auto& router : routers) {
        distances[router.first] = numeric_limits<int>::max();
    }
    distances[start] = 0;
    pq.push({ 0, start });

    while (!pq.empty())
    {
        string current = pq.top().second;
        int currentDist = pq.top().first;
        pq.pop();

        if (currentDist > distances[current])
        {
            continue;
        }

        for (const auto& neighbor : routers[current].routingTable)
        {
            string nextRouter = neighbor.first;
            int cost = neighbor.second;

            int newDist = currentDist + cost;

            if (newDist < distances[nextRouter])
            {
                distances[nextRouter] = newDist;
                previous[nextRouter] = current;
                pq.push({ newDist, nextRouter });
            }
        }
    }

    // Si no hay camino hacia el destino
    if (distances[end] == numeric_limits<int>::max())
    {
        cout << "No hay camino entre " << start << " y " << end << ".\n";
        return { -1, {} };
    }

    // Reconstruir el camino
    vector<string> path;
    for (string at = end; at != ""; at = previous[at])
    {
        path.push_back(at);
        if (at == start) break;
    }
    reverse(path.begin(), path.end());

    return { distances[end], path };
}
