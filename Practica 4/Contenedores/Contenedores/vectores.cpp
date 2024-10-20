#include <iostream>
#include <vector>

int main() {
    // Declarar e inicializar un vector de enteros
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Adicionar elementos al final del vector
    numbers.push_back(6);
    numbers.push_back(7);

    // Acceder al vector con el índice
    std::cout << "Elementos: ";
    for (size_t i = 0; i < numbers.size(); ++i) { //size_t es un tipo de dato unsignd int para tamaños de enteros
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Iterar con un ciclo basado en rango
    std::cout << "Elementos con ciclo por rango: ";
    for (const int& num : numbers) { //num es una variable de referencia, que apunta a cada elemento del vector
        std::cout << num << " ";// se hace const por referencia para no afectar los valores.
    }
    std::cout << std::endl;

    // Eliminar el último elemento
    numbers.pop_back();

    // Verificar si el vector está vacío
    if (numbers.empty()) {
        std::cout << "Vector vacío." << std::endl;
    } else {
        std::cout << "Vector no vacío." << std::endl;
    }

    return 0;
}

