#include "red.h"
#include <iostream>
using namespace std;
int main()
{
    Red red;
    red.addRouter("A");
    red.addRouter("B");
    red.addRouter("C");
    red.addLink("A", "B", 4);
    red.addLink("A", "C", 10);
    red.addLink("B", "C", 3);
    int op, cost;
    string R1, R2;
    do
    {
        cout << "\n --- Menu Principal --- \n";
        cout << "1. Agregar router.\n";
        cout << "2. Eliminar router.\n";
        cout << "3. Agregar conexion entre dos routers.\n";
        cout << "4. Costo de un router a otro.\n";
        cout << "5. Imprimir tabla.\n";
        cout << "6. Actualizar la tabla.\n";
        cout << "7. Cargar tabla.\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;  
        switch (op)
        {
        case 1:
            cout<<"Ingrese el router nuevo: ";
            cin>>R1;
            red.addRouter(R1);
            break;
        case 2:
            cout<<"Ingrese el router a eliminar: ";
            cin>>R1;
            red.removeRouter(R1);
            break;
        case 3:
            cout<<"Ingrese el primer router: ";
            cin>>R1;
            cout<<"Ingrese el segundo router: ";
            cin>>R2;
            cout<<"Ingrese el costo de comunicacion: ";
            cin>>cost;
            red.addLink(R1, R2, cost);
            break;
        case 4:
            break;
        case 5:
            red.printRed();
            break;
        case 6:
            break;
        case 7:
            break;
        case 0:
            break;
        default:
            cout << "Opción no valida. Intente de nuevo.\n";
        }
    }
    while(op != 0);
    return 0;
}
