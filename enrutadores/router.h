#ifndef ROUTER_H
#define ROUTER_H

#include <iostream>
#include <map>
#include <string>

using namespace std;

class Router
{
public:
    string id;  // Identificador del enrutador
    map<string, int> routingTable;  // Tabla de enrutamiento (destino, costo)

    // Constructor
    Router(string id);

    // Métodos
    void addLink(string routerId, int cost);
    void removeLink(string routerId);
    void printRoutingTable()const;
};

#endif // ROUTER_H

