#include <iostream>
#define SIZE 3

int main() {
    int matriz1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[SIZE][SIZE] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int matrizProducto[SIZE][SIZE] = {0};

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            for(int k = 0; k < SIZE; k++) {
                matrizProducto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    std::cout << "Matriz resultante: " << std::endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            std::cout << matrizProducto[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}