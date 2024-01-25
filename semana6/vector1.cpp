// 1.Ordenar un vector de números enteros de manera ascendente:
 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
    vector<int> numeros;
    int valor;

    cout << "Ingrese valores enteros (0 para terminar): " << endl;
    while(cin >> valor && valor != 0) {
        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado: ";
    for(int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}