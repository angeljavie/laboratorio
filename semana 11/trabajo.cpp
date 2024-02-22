#include<iostream>
#include<string>
using namespace std;

int main()
{
   int notas[10];
   int *puntero_notas;
   int suma = 0;
   
   for (int i = 0; i <= 10; i++)
   {
    cout<< " ingrese las notas del estudiante "<<(i + 1)<<endl; 
    cin >> *(puntero_notas + i);
    suma += *(puntero_notas + i);
   }
 

   cout<<" el promedio es "<< suma / 10 <<endl;
   return 0;

}