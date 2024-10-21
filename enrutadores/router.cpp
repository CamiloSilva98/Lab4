#include "Router.h"

// Constructor
Router::Router(string id) : id(id) {}

// Agregar un enlace
void Router::addLink(string routerId, int cost) {
    routingTable[routerId] = cost;
}

// Eliminar un enlace
void Router::removeLink(string routerId) {
    routingTable.erase(routerId);
}

// Imprimir la tabla de enrutamiento
void Router::printRoutingTable() const {
    cout << "Routing table for Router " << id << ":\n";
    for (const auto& entry : routingTable) {
        cout << "To " << entry.first << " - Cost: " << entry.second << "\n";
    }
}
