#include <iostream>
#include <map>

int main() {
 
    std::map<std::string, std::map<std::string, int>> datos;

    // Insert datos into the map of maps
    datos["Alice"]["Mate"] = 95;
    datos["Alice"]["Sociales"] = 88;
    datos["Bob"]["Mate"] = 92;
    datos["Bob"]["Sociales"] = 78;

    // Utilizar llaves anidadas
    std::string nombreEstudiante = "Alice";
    std::string materia = "Mate";

    int score = datos[nombreEstudiante][materia];
    std::cout << nombreEstudiante << " en " << materia << ": " << score << std::endl;

  
    for (const auto& estudiantetEntrada : datos) {
        std::string estudiantet = estudiantetEntrada.first;
        std::cout << estudiantet << " Resultados: ";

        for (const auto& materiaEntrada : estudiantetEntrada.second) {
            std::string materia = materiaEntrada.first;
            int score = materiaEntrada.second;

            std::cout << materia << ": " << score << ", ";
        }

        std::cout << std::endl;
    }

    return 0;
}
