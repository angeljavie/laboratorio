#include <algorithm>
#include <array>
#include <iostream>

int main() {
    std::array<int, 4> numeros;
    for (int& numero : numeros) {
        std::cin >> numero;
    }
    std::sort(numeros.begin(), numeros.end());
    for (const int& numero : numeros) {
        std::cout << numero << ' ';
    }
    return 0;
}