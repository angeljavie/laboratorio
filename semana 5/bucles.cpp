#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
   int numero, contador=0;
            cout<< " \n introduce un nùmero: ";
            cin>>numero;
            while(numero != 0) 
            {
                if (numero > 0){
                    contador++;
                }
                cout<<" \n introdusca otro nùmero:";
                cin>>numero;
            }
        cout<< " has intoducido " << contador <<" numeros mayores que cero.";


   system("pause");
   return 0;
}