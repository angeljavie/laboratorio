#include <iostream>
using namespace std;

int main() {
    int mes;
    cin >> mes;

    string nombres[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
                        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    if(mes >= 1 && mes <= 12) {
        cout << nombres[mes - 1] << endl;
    } else {
        cout << "Número de mes inválido" << endl;
    }

    return 0;
}