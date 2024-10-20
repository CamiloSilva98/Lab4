#include <iostream>

class MiClase {
public:
    MiClase(int valor) {
        // Constructor de la clase MiClase
        this->valor = valor; // Uso de 'this' para asignar a la variable de miembro
    }

    void mostrarValor(int valor) {
        // Función que muestra el valor pasado como parámetro
        // y el valor de la variable de miembro
        std::cout << "Valor de parámetro: " << valor << std::endl;
                std::cout << "Valor de miembro: " << this->valor << std::endl; // Uso de 'this' para acceder a la variable de miembro
    }

private:
    int valor;
};

int main() {
    MiClase obj(42); // Llama al constructor con un valor

    obj.mostrarValor(10); // Llama a la función mostrarValor con un valor

    return 0;
}
