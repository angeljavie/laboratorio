#include<iostream>
#include "departamento.cpp"
#include "persona.cpp"
using namespace std;

class Empleado:public Departamento , public Persona
{
    protected:
    int id_empleado;
    int costo_hora;
    int salario;
    public:
    Empleado(int _id, string _correo, string _telefono, string _nombre, string _apellido, int _codi_departamento, string _nombre_departamento, int _id_empleado, int _costo_hora):
    Persona(_id, _correo, _telefono, _nombre, _apellido),Departamento(_codi_departamento, _nombre_departamento),
    id_empleado(_id_empleado),costo_hora(_costo_hora){}
    void mostra()
    {
        cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;
        cout<<"Correo: "<<correo<<endl;
        cout<<"Telefono: "<<telefono<<endl;
        cout<<"Departamento: "<<nombre_departamento<<endl;
        cout<<"Costo por hora: "<<costo_hora<<endl;
    }
    virtual void calcular_salario()=0;
};
class Ingeniero:public  Empleado
{
    protected:
    int horas_trabajadas;
    public:
    Ingeniero(int _id, string _correo, string _telefono, string _nombre, string _apellido, int _codi_departamento, string _nombre_departamento, int _id_empleado, int _costo_hora, int _horas_trabajadas):
    Empleado(_id, _correo, _telefono, _nombre, _apellido, _codi_departamento, _nombre_departamento, _id_empleado, _costo_hora),horas_trabajadas(_horas_trabajadas){}
    void calcular_salario()
    {
        salario=horas_trabajadas*costo_hora;
    }
    void mostra()
    {
        Empleado::mostra();
        cout<<"Horas trabajadas: "<<horas_trabajadas<<endl;
        cout<<"Salario: "<<salario<<endl;
    }
};
class Gerente:public  Empleado
{
    protected:
    int horas_extras;
    int bono; // nuevo campo para el bono
    public:
    Gerente(int _id, string _correo, string _telefono, string _nombre, string _apellido, int _codi_departamento, string _nombre_departamento, int _id_empleado, int _costo_hora, int _horas_extras):
    Empleado(_id, _correo, _telefono, _nombre, _apellido, _codi_departamento, _nombre_departamento, _id_empleado, _costo_hora),horas_extras(_horas_extras),bono(0){}
    
    void setBono(int _bono) // nuevo método para cambiar el bono
    {
        bono = _bono;
    }
    
    void calcular_salario()
    {
        salario=horas_extras*costo_hora*2 + bono; // incluir el bono al calcular el salario
    }
    void mostra()
    {
        Empleado::mostra();
        cout<<"Horas extras: "<<horas_extras<<endl;
        cout<<"Bono: "<<bono<<endl;
        cout<<"Salario: "<<salario<<endl;
    }
};

int main()
{
    Ingeniero ing1(123,"juan@gmail.com","123456789","Juan","Perez",1,"Sistemas",1,55,14);
    Ingeniero ing2(124,"pedro@gmail.com","123456789","pedro","retis",1,"Sistemas",2,58,14);
    Ingeniero ing3(125,"javier@gmail.com","123456789","javeir","orneta",1,"Sistemas",3,54,14);
    Ingeniero ing4(126,"paolo@gmail.com","123456789","paolo","salgado",1,"Sistemas",4,59,14);
    Gerente ger(127,"angel.gerente@gmail.com","123456789","angel","manuel",1,"Sistemas",5,60,40);

    cout<<"\n***********\n";
    ing1.calcular_salario();
    ing1.mostra();
    cout<<"\n**********\n";
    ing2.calcular_salario();
    ing2.mostra();
    cout<<"\n**********\n";
    ing3.calcular_salario();
    ing3.mostra();
    cout<<"\n**********\n";
    ing4.calcular_salario();
    ing4.mostra();
    cout<<"\n*********\n";

    ger.setBono(2500); // cambiar el bono del gerente a 2500
    ger.calcular_salario();
    ger.mostra();
    cout<<"\n \n";

    return 0;
}