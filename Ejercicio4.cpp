#include <iostream>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;
    double discriminante, raiz1, raiz2, parteReal, parteImaginaria;
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raices reales y diferentes:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "Raices reales e iguales:" << endl;
        cout << "Raiz doble: " << raiz1 << endl;
    } else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Raices complejas:" << endl;
        cout << "Raiz 1: " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "Raiz 2: " << parteReal << " - " << parteImaginaria << "i" << endl;
    }
    return 0;
}