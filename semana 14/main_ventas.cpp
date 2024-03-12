#include <iostream>
#include <string>
#include <fstream>
#include "vendedor.cpp"
using namespace std;
int main()
{
    //Producto producto_1("detergente", "3.20", "plavar");
    Producto producto_1("ace", "2.20", "paralavar", 101, "05/03/2024");

    ofstream archivo_curso("C:\\Users\\FABIAN\\OneDrive - Universidad Nacional Agraria de la Selva\\Documents\\programacion-basica\\Proyecto\\Entregar\\tarea_poo\\ficheros\\facultad.txt");

    if (!archivo_curso.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo_curso << producto_1.datos_producto();
    archivo_curso << "";
    cout << "se registraron los documentos";
    archivo_curso.close();

    ifstream archivo_mostrar("C:\\Users\\FABIAN\\OneDrive - Universidad Nacional Agraria de la Selva\\Documents\\programacion-basica\\Proyecto\\Entregar\\tarea_poo\\ficheros\\facultad.txt");

    if (!archivo_mostrar.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    cout << "Imprimiendo" << endl;
    string linea;
    while (getline(archivo_mostrar, linea))
    {
       
        cout << linea << endl;
    }

    archivo_mostrar.close();
    return 0;
}