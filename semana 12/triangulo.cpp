#include<iostream>
using namespace std;

class triangulo
{
float lado_1;
float lado_2;
float lado_3;



public:
    // constructor
    triangulo(float l, float a, float c)
    {
        lado_1 = l;
        lado_2 = a;
        lado_3 = c;
    }
    triangulo() {  }

    // getter ans setter --> para manipular variables
    float getLado_1()
    {
        return lado_1;
    }
    void setLado_1(float l)
    {
        lado_1 = l;
    }
    float getLado_2()
    {
        return lado_2;
    }
    void setLado_2(float a)
    {
        lado_2 = a;
    }
    float getLado_3()
    {
        return lado_3;
    }
    void getLado_3(float c)
    {
        lado_3 = c;  
    }

    // metodos de rectangulo
    float calcular_area()
    {
        return lado_1* lado_2;
    }

    float calcular_area(float l, float a)
    {
        return l * a;
    }

    float perimetro()
    {
        return 2 * (lado_2 + lado_1);
    }
};

