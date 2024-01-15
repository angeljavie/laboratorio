#include <iostream>

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << (esPrimo(n) ? "Es primo" : "No es primo");
    return 0;
}