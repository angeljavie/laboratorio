// 2.Concatenar palabras ingresadas por el usuario en una única cadena:
 

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> palabras;
    std::string palabra, resultado;

    std::cout << "Ingrese palabras (fin para terminar): " << std::endl;
    while(std::cin >> palabra && palabra != "fin") {
        palabras.push_back(palabra);
    }

    for(int i = 0; i < palabras.size(); i++) {
        resultado += palabras[i] + " ";
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}