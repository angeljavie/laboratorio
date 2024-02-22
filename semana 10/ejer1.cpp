#include<iostream>
#include<vector>
#include<ctime>
using namespace std ;
int valoraleatorio(){

    return 1+(rand()%(9-1+1));
}
    voit sumar(int a, int b, int c, int d, int e, int resp);
int main(){
    int a, b, c, d, e, resp;
    srand(time(NULL));
    a=valoraleatorio();
    b=valoraleatorio();
    c=valoraleatorio();
    d=valoraleatorio();
    e=valoraleatorio();
    sumar(a, b, c, d, e, resp);
cout<<a<<b<<c<<d<<e;
}
