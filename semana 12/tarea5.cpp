#include <iostream>
#include <string>
using namespace std;

class Ciudad {
    string nombre;
    string pais;
    int poblacion;

public:
    Ciudad(string nom, string pai, int pob) : nombre(nom), pais(pai), poblacion(pob) {}

    string getNombre() const { return nombre; }
    string getPais() const { return pais; }
    int getPoblacion() const { return poblacion; }
};

int main() {
    Ciudad madrid("Madrid", "España", 3300000);

    cout << "Nombre de la ciudad: " << madrid.getNombre() << endl;
    cout << "País de la ciudad: " << madrid.getPais() << endl;
    cout << "Población de la ciudad: " << madrid.getPoblacion() << endl;

    return 0;
}