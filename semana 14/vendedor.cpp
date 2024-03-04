#include<iostream>
#include<string>
#include<ctime>
using namespace std;


class vendedor
{
private:
    /* data */
    int id_vendedor;
    int ventas;
public:
    vendedor(/* args */);
    vendedor( int _vendedor, int _ventas)
    {
        id_vendedor = _vendedor;
        ventas = _ventas;
    }
    int getid_vendedor() const 
    {
        return id_vendedor;
    }
    void setid_vendedor(int id_vendedor)
    {
        id_vendedor = id_vendedor;
    }
    int getventas() const 
    {
        return ventas;
    }
    void setventas( int ventas)
    {
        ventas = ventas;
    }
};


