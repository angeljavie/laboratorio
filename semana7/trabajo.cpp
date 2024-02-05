#include <iostream>
using namespace std;

// Función para intercambiar dos números
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para incrementar un número
void incrementar(int &num) {
    num++;
}

// Función para duplicar el valor de un número
void duplicar(int &num) {
    num *= 2;
}

int main() {
    int num1 = 5, num2 = 10;

    intercambiar(num1, num2);
    cout << "num1: " << num1 << ", num2: " << num2 << endl; // num1: 10, num2: 5

    incrementar(num1);
    cout << "num1: " << num1 << endl; // num1: 11

    duplicar(num2);
    cout << "num2: " << num2 << endl; // num2: 10

    return 0;
}