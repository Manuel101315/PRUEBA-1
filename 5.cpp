#include <iostream>
#include <iomanip> 
#include <cmath>  

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "--- Calculadora de la Hipotenusa (Teorema de Pitagoras) ---" << endl;
    cout << "Ingresa la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingresa la longitud del segundo cateto: ";
    cin >> cateto2;

    if (cateto1 <= 0 || cateto2 <= 0) {
        cout << "Error: Las longitudes de los catetos deben ser mayores a cero." << endl;
        return 1;
    }

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << fixed << setprecision(2);

    cout << "\nResultados:" << endl;
    cout << "- Cateto 1: " << cateto1 << endl;
    cout << "- Cateto 2: " << cateto2 << endl;
    cout << "- Hipotenusa: " << hipotenusa << endl;

    return 0;
}
