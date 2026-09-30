#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "--- Inversor de un Numero de Tres Digitos ---" << endl;
    cout << "Ingresa un numero entero entre 100 y 999: ";
    cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "Error: El numero ingresado no esta en el rango de 100 a 999." << endl;
        return 1; 
    }

    int centenas = numero / 100;          
    int decenas = (numero / 10) % 10;     
    int unidades = numero % 10;           

    int invertido = (unidades * 100) + (decenas * 10) + centenas;
    cout << "\nEl numero original es: " << numero << endl;
    cout << "El numero invertido es: " << invertido << endl;

    return 0;
}
