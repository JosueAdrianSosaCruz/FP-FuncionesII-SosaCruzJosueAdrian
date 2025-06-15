#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double cateto1, cateto2, hipotenusa;
    cout << "Ingresa el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Ingresa el valor del segundo cateto: ";
    cin >> cateto2;
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "La hipotenusa del triangulo rectangulo es: " << hipotenusa << endl;
    return 0;
}