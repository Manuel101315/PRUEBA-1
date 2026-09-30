#include <iostream>
#include <string> 

using namespace std;

int main() {
    string palabra1, palabra2;

    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    int longitud1 = palabra1.length();
    int longitud2 = palabra2.length();

    if (longitud1 > longitud2) {
        int diferencia = longitud1 - longitud2;
        cout << "\nLa palabra mas larga es: " << palabra1 << endl;
        cout << "Es mas larga por " << diferencia << " letra(s)." << endl;
    } 
    else if (longitud2 > longitud1) {
        int diferencia = longitud2 - longitud1;
        cout << "\nLa palabra mas larga es: " << palabra2 << endl;
        cout << "Es mas larga por " << diferencia << " letra(s)." << endl;
    } 
    else {
        cout << "\nAmbas palabras tienen la misma longitud (" << longitud1 << " letras)." << endl;
    }

    return 0;
}
