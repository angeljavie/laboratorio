#include<iostream>
#include<string>
using  namespace std;

struct persona
{
    string nombre;
    string apellido;
    float nacimiento;
};
persona per[3];

void nacimiento(persona persona[3]);
void ingresar_persona();
void mostrar_nacimiento(persona persona[3]);

int main()
{
    cout << "Registro de la persona " << endl;
    ingresar_persona();
    nacimiento(per);
    mostrar_nacimiento(per);
    return 0;
}


void ingresar_persona()
{
    cout << "Ingrese  la persona a registrar" << endl;
    // persona per[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "ingrese el nombre de la persona" << endl;
        cin >> per[i].nombre;
        cout << "ingrese el apellido de la persona" << endl;
        cin >> per[i].apellido;
        cout << "ingrese el año de nacimiento " << endl;
        cin >> per[i].nacimiento;
        cout << "Ingrese las notas del estudiante" << endl;
    }
}

void nacimiento(persona persona[3])
{
    for (int i = 0; i < 3; i++)
    {
        float edad = 0;
        for (int j = 0; j < 3; j++)
        {
            edad = 2024 - per[i].nacimiento[i];
        }
        persona[i].nacimiento = edad;
    }
}
calcular persona( persona persona[3])
{
for (int i = 0; i < 3; i++)
{
    if (per[i])
    {
        /* code */
    }
    
}
}