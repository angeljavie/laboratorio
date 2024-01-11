#include<iostream>

using namespace std;

int main() {
    int dias;
    cout << "Ingresa el número de días: ";
    cin >> dias;

    // Calcular años, meses y días
    int años = dias / 365;
    dias %= 365;
    int meses = dias / 30;
    dias %= 30;

    cout << "El número de días ingresado equivale a " << años << " años, " << meses << " meses y " << dias << " días." << endl;

    // Determinar en qué mes recae el día
    string nombres_meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int mes_actual = 0;
    while (dias > dias_por_mes[mes_actual]) {
        dias -= dias_por_mes[mes_actual];
        mes_actual++;
    }

    cout << "El día recae en el mes de " << nombres_meses[mes_actual] << "." << endl;

    return 0;
}