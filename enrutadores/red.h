#ifndef RED_H
#define RED_H

#include "Router.h"  // Incluir la clase Router
#include <map>
#include <string>

class Red
{
public:
    map<string, Router> routers;  // Mapa de enrutadores

    // Métodos
    void addRouter(string id);
    void removeRouter(string id);
    void addLink(string router1, string router2, int cost);
    void printRed();
};

#endif // RED_H

