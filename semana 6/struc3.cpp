#include <iostream>
#include <vector>
using namespace std; 
struct Estudiante {
    string nombre;
    vector<float> calificaciones;
};

int main() {
   vector<Estudiante> estudiantes;
    Estudiante temp;
    int num, numCal;
    float calificacion, suma, promedio;

    cout << "Ingrese el número de estudiantes: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> temp.nombre;

        cout << "Ingrese el número de calificaciones para el estudiante " << i+1 << ": ";
        cin >> numCal;

        suma = 0;
        for(int j = 0; j < numCal; j++) {
            cout << "Ingrese la calificación " << j+1 << ": ";
            cin >> calificacion;
            temp.calificaciones.push_back(calificacion);
            suma += calificacion;
        }

        promedio = suma / numCal;
        cout << "El promedio de calificaciones del estudiante " << temp.nombre << " es: " << promedio << endl;

        estudiantes.push_back(temp);
        temp.calificaciones.clear();
    }

    return 0;
}