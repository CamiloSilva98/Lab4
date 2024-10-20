#include <iostream>
#include <string>
using namespace std;


class Carro {//la clase
public: //Especificador de acceso
    string marca;  //atributos
    string modelo;
    int fecha;
    Carro(string x, string y, int z) { // Constructor with parameters
        marca = x;
        modelo = y;
        fecha = z;
    }
};

int main() {
    // Crear objeto carro
    Carro CarroObj1("BMW", "X5", 1999);;


    // Otro objeto
    Carro CarroObj2("Ford", "Mustang", 1969);


    cout << CarroObj1.marca << " " << CarroObj1.modelo << " " << CarroObj1.fecha << "\n";
    cout << CarroObj2.marca << " " << CarroObj2.modelo << " " << CarroObj2.fecha << "\n";
    return 0;
}
