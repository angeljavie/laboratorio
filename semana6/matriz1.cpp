#include <iostream>
#define SIZE 3

int main() {
    int matriz1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[SIZE][SIZE] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int matrizSuma[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    std::cout << "Matriz resultante: " << std::endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            std::cout << matrizSuma[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}