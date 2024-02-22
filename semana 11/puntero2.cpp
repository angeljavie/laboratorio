#include <iostream>
#include <string>
using namespace std;
int main(){
    int arreglo[5]= {1,2,3,4,5};
    int *puntero;

    puntero = arreglo;

    cout<<"imprimiendo los valores del atteglo "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<*(puntero + i)<<"  ";
        cout << puntero <<endl;
    }
    cout << endl;
    return 0;



}
