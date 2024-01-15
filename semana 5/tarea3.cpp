#include <iostream>

int main() {
    double velocidad_kmh;
    std::cin >> velocidad_kmh;
    double velocidad_ms = velocidad_kmh * 1000 / 3600;
    std::cout << "La velocidad en m/s es " << velocidad_ms;
    return 0;
}