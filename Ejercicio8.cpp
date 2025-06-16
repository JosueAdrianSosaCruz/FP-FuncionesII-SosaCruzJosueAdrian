#include<iostream>
#include<cstdlib>
using namespace std;

int generarNumero() {
    return (rand() % 5) + 1;
}

bool esEscalera(int a, int b, int c) {
    if ((a == b - 1 && b == c - 1) || (a == b + 1 && b == c + 1)) {
        return true;
    }
    return false;
}

int evaluarResultado(int a, int b, int c, int apuesta) {
    if (a == b && b == c) {
        return apuesta * 10;
    } else if ((a == b) || (b == c) || (a == c)) {
        return apuesta * 2;
    } else if (esEscalera(a, b, c)) {
        return apuesta * 5;
    } else {
        return -apuesta;
    }
}

int main() {
    int monedas = 100;
    int apuesta;
    char continuar;
    cout << "Bienvenido a la maquina tragamonedas!" << endl;
    do {
        cout << "\nTienes " << monedas << " monedas." << endl;
        cout << "Cuanto deseas apostar? (1 a 10): ";
        cin >> apuesta;
        if (apuesta < 1 || apuesta > 10 || apuesta > monedas) {
            cout << "Apuesta invalida." << endl;
            continue;
        }
        int n1 = generarNumero();
        int n2 = generarNumero();
        int n3 = generarNumero();
        cout << "Resultados: " << n1 << " - " << n2 << " - " << n3 << endl;
        int ganancia = evaluarResultado(n1, n2, n3, apuesta);

        if (ganancia > 0) {
            cout << "Ganaste " << ganancia << " monedas!" << endl;
        } else {
            cout << "Perdiste " << apuesta << " monedas." << endl;
        }

        monedas += ganancia;

        if (monedas <= 0) {
            cout << "Te has quedado sin monedas. Fin del juego." << endl;
            break;
        }
        cout << "Deseas seguir jugando? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');
    cout << "Terminaste con " << monedas << " monedas. Gracias por jugar!" << endl;
    return 0;
}