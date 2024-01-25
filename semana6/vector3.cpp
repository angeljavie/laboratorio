// 3. Contar cuántas veces aparece un carácter en un vector:
 
#include <iostream>
#include <vector>

int main() {
    std::vector<char> caracteres = {'a', 'b', 'c', 'd', 'a', 'a', 'b', 'c'};
    char caracter;
    int contador = 0;

    std::cout << "Ingrese un caracter: ";
    std::cin >> caracter;

    for(int i = 0; i < caracteres.size(); i++) {
        if(caracteres[i] == caracter) {
            contador++;
        }
    }

    std::cout << "El caracter " << caracter << " aparece " << contador << " veces." << std::endl;

    return 0;
}