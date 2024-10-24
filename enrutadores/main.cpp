#include "red.h"
#include <iostream>
#include <string>

using namespace std;

struct Conexion {
    std::string router1;
    std::string router2;
    int costo;
};
int main()
{
    Red red;
    int op, cost;
    string R1, R2;
    do
    {
        cout << "\n --- Menu Principal --- \n";
        cout << "1. Agregar router.\n";
        cout << "2. Eliminar router.\n";
        cout << "3. Agregar conexion entre dos routers.\n";
        cout << "4. Menor costo de un router a otro.\n";
        cout << "5. Imprimir tabla de conexiones de un router\n";
        cout << "6. Imprimir tabla.\n";
        cout << "7. Cargar tabla.\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;  
        switch (op)
        {
        case 1://agregar
        {
            cout<<"Ingrese el router nuevo: ";
            cin>>R1;
            red.addRouter(R1);
            break;
        }
        case 2://eliminar
        {
            cout<<"Ingrese el router a eliminar: ";
            cin>>R1;
            red.removeRouter(R1);
            break;
        }
        case 3://agregar conexion
        {
            cout<<"Ingrese el primer router: ";
            cin>>R1;
            cout<<"Ingrese el segundo router: ";
            cin>>R2;
            cout<<"Ingrese el costo de comunicacion: ";
            cin>>cost;
            red.addLink(R1, R2, cost);
            break;
        }
        case 4://menor costo
        {
            cout << "Ingrese el router de origen: ";
            cin >> R1;
            cout << "Ingrese el router de destino: ";
            cin >> R2;
            auto result = red.findShortestPath(R1, R2);
            if (result.first != -1)
            {
                cout << "El costo minimo entre " << R1 << " y " << R2 << " es " << result.first << ".\n";
                cout << "Camino: ";
                for (const string& router : result.second)
                {
                    cout << router << " ";
                }
                cout << "\n";
            }
        }
            break;
        case 5://tabla de un router
        {
            cout << "Ingrese el router: ";
            cin >> R1;
            red.printConnections(R1);
            break;
        }
        case 6://tabla de todos los routers
        {
            red.printRed();
            break;
        }
        case 7://Cargar desde archivo
        {
            red.loadFromCSV("tabla.csv");
            break;
        }
        case 0://salir
        {
            break;
        }
        default:
            cout << "Opción no valida. Intente de nuevo.\n";
        }
    }
    while(op != 0);
    return 0;
}
