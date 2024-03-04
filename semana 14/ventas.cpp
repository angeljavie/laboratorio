#include<iostream>
#include<string>
#include<ctime>

using namespace std; 

class ventas
{
private:
    /* data */
    int id_venta;
    int id_producto;
    int fecha;
    int stock;
public:
    ventas(/* args */);
    ventas(int _ventas, int _producto, int _fecha, int _stock) {
        id_venta = _ventas;
        id_producto = _producto;
        fecha = _fecha;
        stock = _stock;
    }
    int getid_venta() const
    {
        return id_venta;
    }
    void setid_ventas(int id_ventas)
    {
        id_ventas = id_ventas;
    }
    int getid_producto() const
    {
        return id_producto;
    }
    void setid_productos(int id_productos)
    {
        id_productos = id_productos;
    }
    int getfecha() const
    {
        return fecha;
    }
    void setfechas( int fechas)
    {
        fechas = fechas;
    }
    int getstock() const
    {
        return stock;
    }
    void setstock (int stock)
    {
        stock = stock;
    }
};


