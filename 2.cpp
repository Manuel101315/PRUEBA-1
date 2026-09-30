#include <iostream>
#include <iomanip> // Para controlar los decimales (setprecision)

using namespace std;

int main() {
    double suma = 0, nota;
    int totalNotas = 4;

    cout << "--- Calculadora de Promedio de Notas ---" << endl;
    cout << "Por favor, ingresa las " << totalNotas << " notas:" << endl;

    // Bucle para solicitar y sumar las notas
    for (int i = 1; i <= totalNotas; i++) {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota; // Acumula la suma de las notas
    }

    // Calcular el promedio
    double promedio = suma / totalNotas;

    // Configurar la salida para mostrar 2 decimales
    cout << fixed << setprecision(2);

    // Mostrar el resultado final
    cout << "\nEl promedio final es: " << promedio << endl;

    return 0;
}
