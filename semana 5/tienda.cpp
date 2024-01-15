#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 1000.0;  // saldo inicial

    do {
        cout << "\n1. Consultar saldo\n2. Retirar dinero\n3. Depositar dinero\n4. Salir\n";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Saldo: " << saldo << endl;
                break;
            case 2:
                double retiro;
                cout << "Monto a retirar: ";
                cin >> retiro;
                if(retiro > saldo) {
                    cout << "Saldo insuficiente" << endl;
                } else {
                    saldo -= retiro;
                }
                break;
            case 3:
                double deposito;
                cout << "Monto a depositar: ";
                cin >> deposito;
                saldo += deposito;
                break;
            case 4:
                cout << "Gracias por usar nuestro cajero" << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
        }
    } while(opcion != 4);

    return 0;
}