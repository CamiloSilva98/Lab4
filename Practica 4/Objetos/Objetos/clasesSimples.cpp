#include <iostream>
using namespace std;


class Carro {//la clase
public: //Especificador de acceso
    string marca;  //atributos
    string modelo;
    int fecha;
};

int main() {
    // Crear objeto carro
    Carro CarroObj1;
    CarroObj1.marca = "BMW";
    CarroObj1.modelo = "X5";
    CarroObj1.fecha = 1999;

    // Otro objeto
    Carro CarroObj2;
    CarroObj2.marca = "Ford";
    CarroObj2.modelo = "Mustang";
    CarroObj2.fecha = 1969;

    cout << CarroObj1.marca << " " << CarroObj1.modelo << " " << CarroObj1.fecha << "\n";
    cout << CarroObj2.marca << " " << CarroObj2.modelo << " " << CarroObj2.fecha << "\n";
    return 0;
}
