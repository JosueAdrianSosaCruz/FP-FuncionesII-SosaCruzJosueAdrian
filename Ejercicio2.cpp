#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int cantidad,maximo,numero;
    cout << "Cuantos numeros aleatorios deseas generar?: ";
    cin >> cantidad;
    cout << "Cual es el valor maximo que usted permite?: ";
    cin >> maximo;
    cout << "Numeros aleatorios generados:" << endl;
    for (int i = 0; i < cantidad; i++) {
        numero = rand() % (maximo + 1); 
        cout << numero << " ";
    }
    return 0;
}