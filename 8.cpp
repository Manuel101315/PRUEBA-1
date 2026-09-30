#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, nota3_necesaria;
    double nota_minima = 6.0;

    cout << "Ingrese la nota de la evaluacion 1 (1-10): ";
    cin >> nota1;
    cout << "Ingrese la nota de la evaluacion 2 (1-10): ";
    cin >> nota2;

    if (nota1 < 1.0 || nota1 > 10.0 || nota2 < 1.0 || nota2 > 10.0) {
        cout << "Error: Las notas deben estar en el rango de 1 a 10." << endl;
        return 1;
    }
    
    double acumulado = (nota1 * 0.20) + (nota2 * 0.30);

    nota3_necesaria = (nota_minima - acumulado) / 0.50;

    if (nota3_necesaria > 10.0) {
        cout << "\nNo es posible aprobar. Incluso sacando 10 en la tercera evaluacion, el puntaje no alcanza." << endl;
    } 
    else if (nota3_necesaria <= 1.0) {
        cout << "\n¡Felicidades! Ya tienes asegurada la aprobacion (con la nota minima de 1 en la tercera evaluacion pasas)." << endl;
    } 
    else {
        cout << "\nNecesitas sacar al menos un **" << nota3_necesaria << "** en la tercera evaluacion para aprobar con " << nota_minima << "." << endl;
    }

    return 0;
}
