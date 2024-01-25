// 1.Ordenar un vector de números enteros de manera ascendente:
 

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Ingrese valores enteros (0 para terminar): " << std::endl;
    while(std::cin >> valor && valor != 0) {
        numeros.push_back(valor);
    }

    std::sort(numeros.begin(), numeros.end());

    std::cout << "Vector ordenado: ";
    for(int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }

    return 0;
}