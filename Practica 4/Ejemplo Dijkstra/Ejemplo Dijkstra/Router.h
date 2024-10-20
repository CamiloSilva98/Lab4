#ifndef ROUTER_H
#define ROUTER_H

#include <vector>
#include <utility>

class Router {
public:
    Router(int id);
    int idRouter;
    std::vector<std::pair<Router*, int>> vecinos; // Un vector de pares, guarda los vecinos y los costos al vecino
    int distancia;
    bool visitado;
    void nuevoVecino(Router* vecino, int costo);
    void confDistancia(int distancia);
    void reinicio();

};

void dijkstra(Router* fuente);

#endif
