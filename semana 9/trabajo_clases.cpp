#include <iostream>
#include <string>
using namespace std;

struct alumno
{
    string nombre;
    int edad;
    float nota[3];
    float promedio;
};

float calcular_promedio(float notas[3])
{
    float suma = 0;
    for (int i = 0; i < 3; i++)
    {
        suma += notas[i];
    }
    return suma / 3;
}

void determinar_aprobacion(float promedio)
{
    if (promedio >= 10.5)
    {
        cout << "\n *******Felizidades aprobastes********\n" << endl;
    }
    else
    {
        cout << "\n*******Lo siento no aprobastes *******\n" << endl;
    }
}

bool es_mayor_edad(int edad)
{
    return edad >= 18;
}

int main()
{
    alumno estudiante1;
    alumno estudiante2;

    cout << "Ingrese el nombre del estudiante: "<<endl;
    cin >> estudiante1.nombre;

    cout << "Ingrese la edad del estudiante: "<<endl;
    cin >> estudiante1.edad;

    cout << "Ingrese las 3 notas del estudiante: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> estudiante1.nota[i];
    }

    estudiante1.promedio = calcular_promedio(estudiante1.nota);

    cout << "El promedio del estudiante es: " << estudiante1.promedio << endl;

    cout << "El estudiante ";
    if (es_mayor_edad(estudiante1.edad))
    {
        cout << "es mayor de edad  "<<endl;
    }
    else
    {
        cout << "no es mayor de edad"<<endl;
    }
    determinar_aprobacion(estudiante1.promedio);

    

    cout << "Ingrese el nombre del estudiante: "<<endl;
    cin >> estudiante2.nombre;

    cout << "Ingrese la edad del estudiante: "<<endl;
    cin >> estudiante2.edad;

    cout << "Ingrese las 3 notas del estudiante: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> estudiante2.nota[i];
    }

    estudiante2.promedio = calcular_promedio(estudiante2.nota);

    cout << "El promedio del estudiante es: " << estudiante2.promedio << endl;

    cout << "El estudiante ";
    if (es_mayor_edad(estudiante2.edad))
    {
        cout << "es mayor de edad  "<<endl;
    }
    else
    {
        cout << "no es mayor de edad y "<<endl;
    }
    determinar_aprobacion(estudiante2.promedio);


    return 0;
}