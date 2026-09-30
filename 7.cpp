#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero;

    cout << "Ingrese un numero real: ";
    cin >> numero;

    // fmod calcula el módulo (residuo) con respecto a 1.0
    double parte_decimal = fmod(numero, 1.0);

    cout << "La parte decimal es: " << parte_decimal << endl;

    return 0;
}
