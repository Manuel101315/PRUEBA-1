#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if (isalpha(caracter)) {
        cout << "\nEl caracter es una **letra**." << endl;
        
        if (isupper(caracter)) {
            cout << "Tipo: Es una letra **mayuscula**." << endl;
        } else {
            cout << "Tipo: Es una letra **minuscula**." << endl;
        }
    } 
    
    else if (isdigit(caracter)) {
        cout << "\nEl caracter es un **numero** (digito)." << endl;
    } 
    else {
        cout << "\nEl caracter **no es ni una letra ni un numero** (es un simbolo u otro caracter especial)." << endl;
    }

    return 0;
}
