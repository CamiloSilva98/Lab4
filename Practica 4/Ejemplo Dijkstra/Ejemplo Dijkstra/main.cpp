#include "Router.h"
#include <iostream>

#include <locale>
#include <QCoreApplication>
#include <QTextStream>
#include <QLocale>

int main(int argc, char *argv[]) {

    Router A(0), B(1), C(2), D(3);
    A.nuevoVecino(&B, 2);
    A.nuevoVecino(&C, 4);
    B.nuevoVecino(&C, 1);
    B.nuevoVecino(&D, 7);
    C.nuevoVecino(&D, 3);


    dijkstra(&A);


    int distanciaCorta = D.distancia;

    std::cout << "Distancia corta de A a D: " << distanciaCorta << std::endl;

    return 0;
}
