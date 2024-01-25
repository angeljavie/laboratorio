// 2.Concatenar palabras ingresadas por el usuario en una única cadena:
 

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

int main() {
    vector<string> palabras;
    string palabra, resultado;

    cout << "Ingrese palabras (fin para terminar): " << endl;
    while(cin >> palabra && palabra != "fin") {
        palabras.push_back(palabra);
    }

    for(int i = 0; i < palabras.size(); i++) {
        resultado += palabras[i] + " ";
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}