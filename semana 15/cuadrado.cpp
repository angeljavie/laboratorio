#include<iostream>
using namespace std;

class FormaGeometrica
{

public:
   virtual void dibujar() const = 0;
   virtual double calcular_Area() const = 0;

};

class Cuadrado : public FormaGeometrica
{
private:
    double lado1;
    double lado2;
public:
    Cuadrado();
    Cuadrado(double l, double a){
        lado1 = l;
        lado2 = a;
    } 

    void dibujar() const override{
        cout<<"dibujando el rectangulo"<<endl;
    }
    double calcular_Area() const override {
        return lado1 * lado2;
    }
};