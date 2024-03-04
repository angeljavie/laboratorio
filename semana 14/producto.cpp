#include <iostream>
#include <string>
#include <ctime>
using namespace std;




class producto
{
private:
    /* data */
    int id_producto;
    string descripcion;
    string tipo;
    int fecha;
    float precio;
public:
    producto ( int _producto, string _descripcion, int _fecha, int _precio )
    {
    id_producto = _producto;
    descripcion = _descripcion;
    fecha = _fecha;
    precio = _precio;
    }

    int Getid_producto() const
    {
        return id_producto;
    }

    void Setid_producto(int id_producto)
    {
       id_producto = id_producto;
    }
    string getipo() const
    {
        return tipo;
    }
    void settipo(string tipo)
    {
        tipo = tipo;
    }
    string Getdescripcion() const
    {
        return descripcion;
    }

    void Setdescripcion (string descripcion)
    {
       descripcion = descripcion;
    }

    int Getfecha() const
    {
        return fecha;
    }

    void Setfechas(int fechas)
    {
        fechas = fechas;
    }

    double Getprecio() const
    {
        return precio;
    }

    void Setprecios(double precios)
    {
        precios = precios;
    }

};