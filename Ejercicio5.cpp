#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &esReal) {
    double discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante >= 0) {
        esReal = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        esReal = false;
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        raiz1 = parteReal;
        raiz2 = parteImaginaria;
    }
}
int main() {
    double a, b, c;
    double raiz1, raiz2;
    bool esReal;
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    calcularRaices(a, b, c, raiz1, raiz2, esReal);
    if (esReal) {
        if (raiz1 == raiz2) {
            cout << "Raices reales e iguales:" << endl;
            cout << "Raiz doble: " << raiz1 << endl;
        } else {
            cout << "Raices reales y diferentes:" << endl;
            cout << "Raiz 1: " << raiz1 << endl;
            cout << "Raiz 2: " << raiz2 << endl;
        }
    } else {
        cout << "Raices complejas:" << endl;
        cout << "Raiz 1: " << raiz1 << " + " << raiz2 << "i" << endl;
        cout << "Raiz 2: " << raiz1 << " - " << raiz2 << "i" << endl;
    }
    return 0;
}