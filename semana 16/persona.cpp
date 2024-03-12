#include<iostream>
#include<string>
#include "tipocontacto.cpp"
using namespace std;
class Persona: public Tipocontacto
{
    protected:
    string nombre;
    string apellido;
    public:
    Persona(int _id, string _correo, string _telefono, string _nombre, string _apellido):Tipocontacto(_id, _correo, _telefono),nombre(_nombre),apellido(_apellido){}
};