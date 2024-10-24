#ifndef RED_H
#define RED_H

#include "Router.h"  // Incluir la clase Router
#include <map>
#include <string>
#include <vector>

class Red
{
public:
    map<string, Router> routers;  // Mapa de enrutadores

    // Métodos
    void addRouter(string id);
    void removeRouter(string id);
    void addLink(string router1, string router2, int cost);
    void printRed();
    void printConnections(const string& router);
    void loadFromCSV(const string& filename);
    pair<int, vector<string>> findShortestPath(const string& start, const string& end);
};

#endif // RED_H

