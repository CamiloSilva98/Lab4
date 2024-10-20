#include <iostream>

class MiClase {
public: // Especificador de acceso público
    int variablePublica;  // Miembro de datos público

    void metodoPublico() {  // Función miembro pública
        std::cout << "Este es un metodo publico." << std::endl;
    }

private: // Especificador de acceso privado
    int variablePrivada;  // Miembro de datos privado

    void metodoPrivado() {  // Función miembro privada
        std::cout << "Este es un método privado." << std::endl;
    }

protected: // Especificador de acceso protegido
    int variableProtegida;  // Miembro de datos protegido

    void metodoProtegido() {  // Función miembro protegida
        std::cout << "Este es un método protegido." << std::endl;
    }
};

int main() {
    MiClase obj;

    // Acceder a miembros públicos está permitido desde fuera de la clase
    obj.variablePublica = 42;
    obj.metodoPublico();

    // Acceder a miembros privados desde fuera de la clase no está permitido
    // obj.variablePrivada = 10; // Error
    // obj.metodoPrivado(); // Error

    // Acceder a miembros protegidos desde fuera de la clase no está permitido
    // obj.variableProtegida = 20; // Error
    // obj.metodoProtegido(); // Error

    return 0;
}
