#include <iostream>
#include <list>

int main() {
    // Declarar e inicializar
    std::list<char> characters = {'a', 'b', 'c', 'd'};

    // Insertar un elemento al principio
    characters.push_front('z');

    // Insertar un elemento en una posición específica
    std::list<char>::iterator it = characters.begin(); //un iterador actúa como un puntero a elementos de estructuras de datos
    std::advance(it, 2);  // Mover al iterador a la pisición 3
    characters.insert(it, 'x');

    // Iterar la lista
    std::cout << "Elementos: ";
    for (const char& ch : characters) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    // Remover el último elemento
    characters.pop_back();

   
    if (characters.empty()) {
        std::cout << "Lista vac" << std::endl;
    } else {
        std::cout << "Lista no vac." << std::endl;
    }

    return 0;
}
