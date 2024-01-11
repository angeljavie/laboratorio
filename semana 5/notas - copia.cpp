#include <iostream>
using namespace std;

int main() {
    int nota;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        cout << "Ingresa tu nota: ";
        cin >> nota;

        if (nota >= 19 && nota <= 20) {
            cout << "Tu nota es A";
        } else if (nota >= 17 && nota <= 18) {
            cout << "Tu nota es B";
        } else if (nota >= 14 && nota <= 16) {
            cout << "Tu nota es C";
        } else if (nota >= 10 && nota <= 13) {
            cout << "Tu nota es D";
        } else if (nota >= 0 && nota <= 9) {
            cout << "Tu nota es E";
        } else {
            cout << "Nota inválida";
        }

        cout << "\n¿Deseas ingresar otra nota? (s/n): ";
        cin >> continuar;
    }

    return 0;
}