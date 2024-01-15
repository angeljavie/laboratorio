#include <iostream>
using namespace std;

int main() {
    int dias;
cout<<" ingresa el numero de dias: "<<endl;
    cin >> dias;

    int años = dias / 365;
    dias %= 365;
    int meses = dias / 30;
    dias %= 30;

    cout << "Años: " << años << ", Meses: " << meses << ", Días: " << dias << endl;
    return 0;
}