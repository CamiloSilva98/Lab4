#include "Router.h"

// Constructor
Router::Router(const string& id) : id(id) {}

// Agregar un enlace
void Router::addLink(string routerId, int cost)
{
    routingTable[routerId] = cost;
}

// Eliminar un enlace
void Router::removeLink(string routerId)
{
    routingTable.erase(routerId);
}

// Imprimir la tabla de enrutamiento
void Router::printRoutingTable() const
{
    cout << "--| Desde el router " << id << ":|--\n";
    for (const auto& entry : routingTable)
    {
        cout << "Hacia " << entry.first << " - Cuesta: " << entry.second << "\n";
    }
}
