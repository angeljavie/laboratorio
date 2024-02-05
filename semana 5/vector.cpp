//elavora un programa que solicite las notas de 10 estudiante, el programa debe validar que las notas sea[0,20], se pide lo siguiente
// A)devolver la nota maxima
// B)calcular el promedio
// C)realizar la suma de todas las notas
// D)ordenar las notas de mayot a menor

#include <iostream>
#include <vector>
#include<stdlib.h>
#include <algorithm>
using namespace std;

int main() {
    vector<int> notas;
    int nota;

    // Solicitando las notas de los 10 estudiantes
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese la nota del estudiante " << i+1 << ": ";
        cin >> nota;
        // Validando que las notas estén entre 0 y 20
        if(nota < 0 || nota > 20) {
            cout << "Nota inválida. Por favor, ingrese una nota entre 0 y 20.\n";
           i--;
        }
        else {
            notas.push_back(nota);
        }
    }

    // A) Devolver la nota máxima
    int maxNota = *max_element(notas.begin(), notas.end());
    cout << "La nota máxima es: " << maxNota << "\n";

    // B) Calcular el promedio
    int suma = 0;
    for(int i = 0; i < notas.size(); i++) {
        suma += notas[i];
    }
    float promedio = suma / notas.size();
    cout << "El promedio de las notas es: " << promedio << "\n";

    // C) Realizar la suma de todas las notas
    cout << "La suma de todas las notas es: " << suma << "\n";

    // D) Ordenar las notas de mayor a menor
    sort(notas.begin(), notas.end(), greater<int>());
    cout << "Las notas ordenadas de mayor a menor son: ";
    for(int i = 0; i < notas.size(); i++) {
        cout << notas[i] << " ";
    }

    cout<<" \n \n";
    system("pause");
    return 0;
}