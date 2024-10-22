#include "red.h"
#include <iostream>
using namespace std;
int main()
{
    Red red;
    int op;
    do
    {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Agregar router.\n";
        cout << "2. Eliminar router.\n";
        cout << "3. Actualizar tabla.\n";
        cout << "4. Cargar tabla.\n";
        cout << "0. Guardar y Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;
    }
    while(op != 0);
    // Agregar enrutadores
    red.addRouter("A");
    red.addRouter("B");
    red.addRouter("C");

    // Agregar enlaces entre los enrutadores
    red.addLink("A", "B", 4);
    red.addLink("A", "C", 10);
    red.addLink("B", "C", 3);

    // Imprimir la tabla de enrutamiento
    red.printRed();

    return 0;
}
