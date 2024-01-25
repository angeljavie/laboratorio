#include <iostream>
#include <vector>

struct Libro {
    std::string titulo;
    std::string autor;
    int anoPublicacion;
};

int main() {
    std::vector<Libro> libros;
    Libro temp;
    int num;

    std::cout << "Ingrese el número de libros: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        std::cout << "Ingrese el título, autor y año de publicación del libro " << i+1 << ": ";
        std::cin >> temp.titulo >> temp.autor >> temp.anoPublicacion;
        libros.push_back(temp);
    }

    std::cout << "\nInformación de los libros: " << std::endl;
    for(int i = 0; i < num; i++) {
        std::cout << "Libro " << i+1 << ": " << libros[i].titulo << ", " << libros[i].autor << ", " << libros[i].anoPublicacion << std::endl;
    }

    return 0;
}