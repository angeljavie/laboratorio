// 3. Contar cuántas veces aparece un carácter en un vector:
 
#include <iostream>
#include <vector>
using namespace std; 

int main() {
    vector<char> caracteres = {'a', 'b', 'c', 'd', 'a', 'a', 'b', 'c'};
    char caracter;
    int contador = 0;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    for(int i = 0; i < caracteres.size(); i++) {
        if(caracteres[i] == caracter) {
            contador++;
        }
    }

    cout << "El caracter " << caracter << " aparece " << contador << " veces." << endl;

    return 0;
}