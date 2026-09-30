#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int horas, minutos, segundos;
    int tipoUnidad, cantidad;

    cout << "--- Actualizador de Reloj ---" << endl;
    cout << "Ingresa la hora actual (HH MM SS separados por espacio o enter):" << endl;
    cout << "Horas (0-23): ";
    cin >> horas;
    cout << "Minutos (0-59): ";
    cin >> minutos;
    cout << "Segundos (0-59): ";
    cin >> segundos;

    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
        cout << "Error: La hora ingresada no es valida." << endl;
        return 1;
    }

    cout << "\nSelecciona la unidad que deseas sumar:" << endl;
    cout << "1. Horas" << endl;
    cout << "2. Minutos" << endl;
    cout << "3. Segundos" << endl;
    cout << "Elige una opcion (1-3): ";
    cin >> tipoUnidad;

    if (tipoUnidad < 1 || tipoUnidad > 3) {
        cout << "Error: Opcion no valida." << endl;
        return 1;
    }

    cout << "Ingresa la cantidad a sumar: ";
    cin >> cantidad;

    if (cantidad < 0) {
        cout << "Error: La cantidad a sumar no puede ser negativa." << endl;
        return 1;
    }

    long long totalSegundos = (horas * 3600LL) + (minutos * 60LL) + segundos;

    if (tipoUnidad == 1) {
        totalSegundos += (cantidad * 3600LL); 
    } else if (tipoUnidad == 2) {
        totalSegundos += (cantidad * 60LL);   
    } else if (tipoUnidad == 3) {
        totalSegundos += cantidad;            
    }

    totalSegundos %= 86400;

    int nuevasHoras = totalSegundos / 3600;
    int nuevosMinutos = (totalSegundos % 3600) / 60;
    int nuevosSegundos = totalSegundos % 60;

    cout << "\n--- Resultado ---" << endl;
    cout << "Hora actualizada: " 
         << setfill('0') << setw(2) << nuevasHoras << ":"
         << setfill('0') << setw(2) << nuevosMinutos << ":"
         << setfill('0') << setw(2) << nuevosSegundos << endl;

    return 0;
}
