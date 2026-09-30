#include <iostream>
#include <iomanip> // Necesario para controlar los decimales (setprecision)
#include <cmath>   // Necesario para funciones matemáticas como pow()

using namespace std;

int main() {
    double radio, perimetro, area;
    const double PI = 3.14159265358979323846;

    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    if (radio < 0) {
        cout << "Error: El radio no puede ser un valor negativo." << endl;
        return 1;
    }

    perimetro = 2 * PI * radio;
    area = PI * pow(radio, 2);

    cout << fixed << setprecision(2);

    cout << "\nResultados para un radio de " << radio << ":" << endl;
    cout << "- Perimetro: " << perimetro << endl;
    cout << "- Area: " << area << endl;

    return 0;
}
