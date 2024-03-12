#include <iostream>
#include <string>
#include <ctime>
#include "ventas.cpp"
#include "persona1.cpp"
#include "producto.cpp"
using namespace std;

class Vendedor : public Persona
{
private:
    /* data */
    /* int id_vendedor;
    int ventas[1];
    Producto producto;
    Ventas ventas; */
    int id_vendedor;
    int ventasArray[1];  // Renamed the array variable to 'ventasArray'
    Producto producto;
    Ventas ventasObj;

public : 
    Vendedor(/* args */);
    Vendedor(int _id_vendedor, string _apellidos,string _nombres, int _dni, string _direccion,int _id ): Persona(_id, _apellidos, _nombres, _dni, _direccion) {
        id_vendedor = _id_vendedor;
    } 
    int GetId_vendedor() const
    {
        return id_vendedor;
    }

    void SetId_vendedor(int id_vendedor)
    {
        id_vendedor = id_vendedor;
    }
};
