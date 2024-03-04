#include<iostream>
#include<string>
#include<ctime>

using namespace std;


class persona1
{
private:
    int id ;
    string apellidos;
    string nombres;
    string DNI;
    string direccion;

public:
    persona1(string _dni, string _apellidos, string _nombre, string _direcion){
        apellidos = _apellidos;
        DNI = _dni;
        nombres = _nombre;
        direccion = _direcion;
    }

    int getid () const
    {
    return id;
    }
    void setId( int id)
    {
        id = id;
    }

    string GetApellidos() const
    {
        return apellidos;
    }

    void SetApellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string GetNombres() const
    {
        return nombres;
    }

    void SetNombres(string nombres)
    {
        nombres = nombres;
    }

    string GetDni() const
    {
        return DNI;
    }

    void SetDni(string dni)
    {
        dni = dni;
    }

    string GetDireccion() const
    {
        return direccion;
    }

    void SetDireccion(string direccion)
    {
        direccion = direccion;
    }

    
};
