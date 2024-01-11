/* Sucesión de Collatz: Escribe un programa que tome un número entero positivo n como entrada y genere la secuencia de Collatz para ese número. La secuencia de Collatz se obtiene siguiendo estas reglas:
a.  Si n es par, divídelo por 2.
b.  Si n es impar, multiplícalo por 3 y suma 1.
c.  Repite el proceso hasta llegar al número 1.
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int y;
    cout << "Ingrese un valor positivo : ";
    cin >> y;
    system("cls");
    while (y <= 0)
    {
        cout << "Por favor ingrese un numero positivo";
        cin >> y;
    }
    cout<<"La secuencia de : "<<y<<" es :\n";
    while (y != 1)
    {
        cout<<y<<" ";
        if (y % 2 == 0)
        {
            y /= 2;
        }
        else
        {
            y = 3*y + 1;
        }
    }
    cout<<y<<endl;
    return 0;
}
