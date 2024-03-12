#include<iostream>
#include<string>
using namespace std;
class Tipocontacto
{
    protected:
    int id;
    string correo;
    string telefono;
    public:
    Tipocontacto(int _id, string _correo, string _telefono):id(_id),correo(_correo),telefono(_telefono){}
};