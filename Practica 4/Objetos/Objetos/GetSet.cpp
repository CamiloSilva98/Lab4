#include <iostream>

class MiClase {
public:
    int obtenerVariablePublica() const {  // Función "get" para obtener variablePublica
        return variablePublica;
    }

    void establecerVariablePublica(int valor) {  // Función "set" para establecer variablePublica
        variablePublica = valor;
    }

private:
    int variablePublica;
};

int main() {
    MiClase obj;

    // Usar las funciones "get" y "set" para acceder y modificar variablePublica
    obj.establecerVariablePublica(42);
    std::cout << "Valor de variablePublica: " << obj.obtenerVariablePublica() << std::endl;

    return 0;
}
