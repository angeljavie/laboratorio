#include<iostream>
using namespace std;

class FormaGeometrica
{

public:
   virtual void dibujar() const = 0;
   virtual double calcular_Area() const = 0;

};

class circulo : public FormaGeometrica
{
private:
    double pi = 3.14;
    double radio;
public:
    circulo();
    circulo(double b, double r){
        pi = b;
        radio = r;
    } 

    void dibujar() const override{
        cout<<"dibujando el circulo"<<endl;
    }
    double calcular_Area() const override {
        return  pi * (radio * radio);
    }
};
