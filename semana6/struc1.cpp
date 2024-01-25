#include <iostream>
#include <vector>

struct Alumno {
    std::string nombre;
    int edad;
    float calificacion;
};

int main() {
    std::vector<Alumno> alumnos;
    Alumno temp;
    int num;

    std::cout << "Ingrese el número de estudiantes: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        std::cout << "Ingrese el nombre, edad y calificación del estudiante " << i+1 << ": ";
        std::cin >> temp.nombre >> temp.edad >> temp.calificacion;
        alumnos.push_back(temp);
    }

    std::cout << "\nInformación de los estudiantes: " << std::endl;
    for(int i = 0; i < num; i++) {
        std::cout << "Estudiante " << i+1 << ": " << alumnos[i].nombre << ", " << alumnos[i].edad << ", " << alumnos[i].calificacion << std::endl;
    }

    return 0;
}