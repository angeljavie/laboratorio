#include<iostream>
using namespace std;

int main ()
{
int dia;
cout <<"ingrese un numero del 1 al 7 "<<endl;
cin>>dia;
while (dia> 7 || dia <= 0)
{
    cout<<" ingrese un numero del 1 al 7 "<<endl;
    cin >> dia;
}

switch (dia)
{
case 1:
cout<<"lunes";
break;
case 2:
cout<<"martes";
break;
case 3:
cout<<"miercoles";
break;
case 4:
cout<<"jueves";
break;
case 5:
cout<<"viernes";
break;
case 6:
cout <<"sabado";
break;
case 7:
cout <<"domingo";
break;
default:
break;

}

cout<<" ";
return 0;

}