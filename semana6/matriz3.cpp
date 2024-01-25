#include <iostream>
#include <string>
#define SIZE 3

int main() {
    std::string matriz[SIZE][SIZE] = {{"Hola", "mundo", "!"}, {"Cómo", "estás", "?"}, {"Bien", "gracias", "."}};
    std::string resultado[SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            resultado[i] += matriz[i][j] + " ";
        }
    }

    std::cout << "Resultados: " << std::endl;
    for(int i = 0; i < SIZE; i++) {
        std::cout << resultado[i] << std::endl;
    }

    return 0;
}