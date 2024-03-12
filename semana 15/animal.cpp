#include<iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    void color( string _color)
    {
    cout<<"color de la lcase animal es" <<color<<endl;
    }
};

class Mamifero : public Animal
{
private:
    /* data */
public:
    void cambiar_color(string _color)
    {
        cout<<"cambiando de color"<<endl;
    }
};

class Ave : public Animal
{
private:
    /* data */
public:
  void volar()
  {
    cout<<"el ave vuela"<<endl;
  }
};

// herencia multiple

class Murcielago : public Mamifero, public Ave
{
private:
    /* data */
public:
    void dormir(){
        cout<<"el muricielago duerme boca abajo "<<endl;
    }
};

int main(){
    Mamifero leon;
    leon.color("amarillo");
    leon.cambiar_color("marron");
    return 0;

    Murcielago batman;
    batman.cambiar_color("Azul");
    batman.volar();
    batman.dormir();
}
