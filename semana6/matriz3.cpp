#include <iostream>
#include <string>
#define SIZE 3
using namespace std; 
int main() {
    string matriz[SIZE][SIZE] = {{"Hola", "mundo", "!"}, {"Cómo", "estás", "?"}, {"Bien", "gracias", "."}};
    string resultado[SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            resultado[i] += matriz[i][j] + " ";
        }
    }

    cout << "Resultados: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << resultado[i] << endl;
    }

    return 0;
}