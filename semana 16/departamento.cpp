#include<iostream>
#include<string>
using namespace std;

class Departamento
{
    protected:
    int codi_departamento;
    string nombre_departamento;
    public:
    Departamento(int _codi_departamento, string _nombre_departamento):codi_departamento(_codi_departamento),nombre_departamento(_nombre_departamento){}

};