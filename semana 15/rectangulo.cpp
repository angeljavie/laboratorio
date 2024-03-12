#include<iostream>
using namespace std;

class FormaGeometrica
{

public:
   virtual void dibujar() const = 0;
   virtual double calcular_Area() const = 0;

};

class Rectangulo : public FormaGeometrica
{
private:
    double base;
    double altura;
public:
    Rectangulo();
    Rectangulo(double l, double a){
        base = l;
        altura = a;
    } 

    void dibujar() const override{
        cout<<"dibujando el rectangulo"<<endl;
    }
    double calcular_Area() const override {
        return base * altura;
    }
};
