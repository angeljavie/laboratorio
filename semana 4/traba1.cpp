/* Manejo de Arreglos: Escribe un programa que solicite
 al usuario ingresar 10 números enteros. Luego, encuentra el promedio 
 de los números ingresados y muestra cuántos números son mayores que el promedio. */
#include <iostream>
using namespace std;
int main()
{
    int n[10], numero = 0;
    do
    {
         cout << "Ingrese su numero " << numero + 1 << endl;
        cin >> n[numero];
        numero++;
    } while (numero < 10);

    int suma = 0;
    numero = 0;
    do
    {
        suma += n[numero];
        numero++;
    } while (numero < 10);

    float promedio = static_cast<float>(suma) / 10;

    int cantidad_numMax = 0;
    numero = 0;
    while (numero < 10)
    {
        if (n[numero] > promedio)
        {
            cantidad_numMax++;
        }
        numero++;
    }
    cout << "El promedio de las numeros es : \n" << promedio;
    cout << "\nEncontramos " << cantidad_numMax << " mayores que el    promedio " << endl;
    return 0;
}    



