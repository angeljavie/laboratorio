#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std; 

string convertirNota(int nota) {
    if(nota >= 18) return "A";
    else if(nota >= 14) return "B";
    else if(nota >= 10) return "C";
    else if(nota >= 6) return "D";
    else return "F";
}

int main() {
    srand(time(0));
   vector<std::string> pila;
    int nota;

    for(int i = 0; i < 6; i++) {
        nota = rand() % 21; 
        // Genera una nota aleatoria entre 0 y 20.
        pila.push_back(convertirNota(nota)); 
        // Convierte la nota a su equivalente en letra y la agrega a la pila.
    }

        cout << "Notas en la pila: ";
    for(int i = pila.size()-1; i >= 0; i--) {
        cout << pila[i] << " ";
    }

    return 0;
}