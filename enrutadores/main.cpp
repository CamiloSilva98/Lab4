#include "red.h"

int main()
{
    Red red;

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
