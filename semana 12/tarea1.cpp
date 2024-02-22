#include <iostream>
#include <string>
using namespace std;

class Perro {
    string nombre;
    string raza;
    int edad;

public:
    Perro(string nom, string raz, int ed) : nombre(nom), raza(raz), edad(ed) {}

    string getNombre() const { return nombre; }
    string getRaza() const { return raza; }
    int getEdad() const { return edad; }
};

int main() {
    Perro fido("Fido", "Labrador", 5);

    cout << "Nombre del perro: " << fido.getNombre() << endl;
    cout << "Raza del perro: " << fido.getRaza() << endl;
    cout << "Edad del perro: " << fido.getEdad() << " años" << endl;

    return 0;
}