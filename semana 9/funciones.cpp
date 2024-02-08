#include<iostream>
#include <string>
using namespace std;


int suma ( int valor_01, int valor_02){
    int resultado = valor_01 + valor_02;
    return resultado;
}
int resta (int valor_01, int valor_02){
    int resultado = valor_01 - valor_02;
    return resultado;
}
int multiplicacion (int valor_01, int valor_02){
    int resultado = valor_01 * valor_02;
    return resultado;
}
float divicion (int valor_01, int valor_02){
    float resultado = 0;
    if (valor_02 != 0)
    {
        float resultado = valor_01 / valor_02;
    }
    return resultado;
}
void mensaje()
{
    cout<< "******calculadora********"<<endl;
}
void ingreso_parametro()
{
    cout <<"*********ingrese el valor para el primer parametro**********";
    cin>>valor_01;
    cout<<"**********ingrese el valor para el segundo parametro*********";
    cin>>valor_02;
}

int main()
{
int opcion; 
mensaje();
cout<<"ingrese las opciones de la calculadora"<<endl;
cout<<"1.sumar; 2.restar; 3.multiplicar; 4.dividir";
cin>> opcion;
switch (opcion)
{
case 1: 
ingreso_parametro();
cout << suma(valor_01 , valor_02);
    break;

case 2:
 ingreso_parametro();
cout << resta(valor_01, valor_02);
    break;

case 3:
 ingreso_parametro();
cout << multiplicacion(valor_01, valor_02);
    break;

case 4:
 ingreso_parametro();
cout << divicion(valor_01, valor_02);
    break;


default:
    break;
}


return 0;
}