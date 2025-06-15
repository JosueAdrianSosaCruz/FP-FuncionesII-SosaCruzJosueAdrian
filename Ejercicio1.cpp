#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio, area;
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;
    area = M_PI * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;
    return 0;
}