#include <iostream>
#include <cmath> // Necesario para la función sqrt()
using namespace std;
// Función para calcular la hipotenusa de un triángulo rectángulo utilizando paso por referencia
void calcularHipotenusa(double cateto1, double cateto2, double &hipotenusa) {
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    double cateto1, cateto2, hipotenusa;
    
    // Solicitar al usuario los catetos del triángulo rectángulo
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;
    
    // Calcular la hipotenusa utilizando la función y el paso por referencia
    calcularHipotenusa(cateto1, cateto2, hipotenusa);
    
    // Mostrar el resultado
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;
    
    return 0;
}