/*Matriz Transpuesta: Crea un programa que solicite al usuario
 ingresar los elementos de una matriz cuadrada. Luego, calcula 
 la matriz transpuesta e imprímela en la pantalla. */
#include <iostream>
using namespace std;
int main()
{
    int filas = 3, columnas = 3;
    int n[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese el numero " << i << " y " << j << " es" << endl;
            cin >> n[i][j];
        }
    }

    int matrizTranspuesta[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizTranspuesta[filas][columnas] = n[filas][columnas];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << n[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matrizTranspuesta[filas][columnas];
        }
    }

    return 0;
}
