#include <iostream>
#include <iomanip> // Para formatear los decimales

using namespace std;

int main() {
    double pulgadas;

    cout << "--- Conversor de Pulgadas a Distintas Unidades ---" << endl;
    cout << "Ingresa la cantidad en pulgadas: ";
    cin >> pulgadas;

    // Validación para evitar valores negativos
    if (pulgadas < 0) {
        cout << "Error: La cantidad no puede ser negativa." << endl;
        return 1;
    }

    // 1. Primero convertimos la base a centímetros (cm)
    double cm = pulgadas * 2.54;

    // 2. Realizamos el resto de conversiones a partir de los cm o milímetros
    double mm = cm * 10.0;
    double dm = cm / 10.0;
    double m  = cm / 100.0;
    double DM = cm / 1000.0;  // Decámetro (dam o DM)
    double HM = cm / 10000.0; // Hectómetro (hm o HM)
    double KM = cm / 100000.0;// Kilómetro (km o KM)

    // Configurar la salida para mostrar notación fija y un buen manejo de decimales
    cout << fixed << setprecision(6);

    // Mostrar resultados
    cout << "\nEquivalencias para " << pulgadas << " pulgadas:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "- Milímetros (mm): " << mm << endl;
    cout << "- Centímetros (cm): " << cm << endl;
    cout << "- Decímetros (dm): " << dm << endl;
    cout << "- Metros (m): " << m << endl;
    cout << "- Decámetros (DM): " << DM << endl;
    cout << "- Hectómetros (HM): " << HM << endl;
    cout << "- Kilómetros (KM): " << KM << endl;

    return 0;
}
