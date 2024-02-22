#include <iostream>
#include <string>
using namespace std;

class Pelicula {
    string titulo;
    string director;
    int duracion;

public:
    Pelicula(string tit, string dir, int dur) : titulo(tit), director(dir), duracion(dur) {}

    string getTitulo() const { return titulo; }
    string getDirector() const { return director; }
    int getDuracion() const { return duracion; }
};

int main() {
    Pelicula titanic("Titanic", "James Cameron", 195);

    cout << "Título de la película: " << titanic.getTitulo() << endl;
    cout << "Director de la película: " << titanic.getDirector() << endl;
    cout << "Duración de la película: " << titanic.getDuracion() << " minutos" << endl;

    return 0;
}