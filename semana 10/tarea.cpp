#include <iostream>
using namespace std;

// Función para calcular a^b utilizando paso por referencia
void calcularPotencia(int a, int b, int &resultado) {
    resultado = 1;
    for (int i = 0; i < b; ++i) {
        resultado *= a;
    }
}

int main() {
    int base, exponente, resultado;
    
    // Solicitar al usuario la base y el exponente
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    // Calcular la potencia utilizando la función y el paso por referencia
    calcularPotencia(base, exponente, resultado);
    
    // Mostrar el resultado
    cout << base << "^" << exponente << " = " << resultado << endl;
    
    return 0;
}
