#include <iostream>
#include <vector>
using namespace std; 
struct Libro {
    string titulo;
    string autor;
    int anoPublicacion;
};

int main() {
    vector<Libro> libros;
    Libro temp;
    int num;

    cout << "Ingrese el número de libros: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        cout << "Ingrese el título, autor y año de publicación del libro " << i+1 << ": ";
        cin >> temp.titulo >> temp.autor >> temp.anoPublicacion;
        libros.push_back(temp);
    }

    cout << "\nInformación de los libros: " << endl;
    for(int i = 0; i < num; i++) {
        cout << "Libro " << i+1 << ": " << libros[i].titulo << ", " << libros[i].autor << ", " << libros[i].anoPublicacion << std::endl;
    }

    return 0;
}