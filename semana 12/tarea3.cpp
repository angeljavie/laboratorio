#include <iostream>
#include <string>
using namespace std;

class Libro {
    string titulo;
    string autor;
    int paginas;

public:
    Libro(string tit, string aut, int pag) : titulo(tit), autor(aut), paginas(pag) {}

    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getPaginas() const { return paginas; }
};

int main() {
    Libro gatsby("El Gran Gatsby", "F. Scott Fitzgerald", 180);

    cout << "Título del libro: " << gatsby.getTitulo() << endl;
    cout << "Autor del libro: " << gatsby.getAutor() << endl;
    cout << "Número de páginas del libro: " << gatsby.getPaginas() << endl;

    return 0;
}