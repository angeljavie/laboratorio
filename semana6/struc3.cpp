#include <iostream>
#include <vector>

struct Estudiante {
    std::string nombre;
    std::vector<float> calificaciones;
};

int main() {
    std::vector<Estudiante> estudiantes;
    Estudiante temp;
    int num, numCal;
    float calificacion, suma, promedio;

    std::cout << "Ingrese el número de estudiantes: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        std::cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        std::cin >> temp.nombre;

        std::cout << "Ingrese el número de calificaciones para el estudiante " << i+1 << ": ";
        std::cin >> numCal;

        suma = 0;
        for(int j = 0; j < numCal; j++) {
            std::cout << "Ingrese la calificación " << j+1 << ": ";
            std::cin >> calificacion;
            temp.calificaciones.push_back(calificacion);
            suma += calificacion;
        }

        promedio = suma / numCal;
        std::cout << "El promedio de calificaciones del estudiante " << temp.nombre << " es: " << promedio << std::endl;

        estudiantes.push_back(temp);
        temp.calificaciones.clear();
    }

    return 0;
}