#include <iostream>
#include <vector>
using namespace std; 
struct Alumno {
    string nombre;
    int edad;
    float calificacion;
};

int main() {
    vector<Alumno> alumnos;
    Alumno temp;
    int num;

    cout << "Ingrese el número de estudiantes: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        cout << "Ingrese el nombre, edad y calificación del estudiante " << i+1 << ": ";
        cin >> temp.nombre >> temp.edad >> temp.calificacion;
        alumnos.push_back(temp);
        
    }

    cout << "\nInformación de los estudiantes: " << endl;
    for(int i = 0; i < num; i++) {
        cout << "Estudiante " << i+1 << ": " << alumnos[i].nombre << ", " << alumnos[i].edad << ", " << alumnos[i].calificacion << endl;
    }

    return 0;
}