#include "Red.h"

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
