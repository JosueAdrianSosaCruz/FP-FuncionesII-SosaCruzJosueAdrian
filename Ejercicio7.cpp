#include<iostream>
#include<cstdlib>
using namespace std;

int lanzarDado() {
    return (rand() % 6) + 1;
}

int jugarRonda(int &dado1, int &dado2) {
    dado1 = lanzarDado();
    dado2 = lanzarDado();
    if (dado1 > dado2) return 1;
    else if (dado2 > dado1) return 2;
    else return 0;
}

int main() {
    int puntaje1 = 0, puntaje2 = 0, Valor;
    int dado1, dado2;
    int ronda = 1;
    cout << "Juego de dados por turnos (primer jugador en ganar 3 rondas gana el juego)" << endl;
    while (puntaje1 < 3 && puntaje2 < 3) {
	    cout << "Ingrese algun valor para iniciar el juego" << endl;
        cin>>Valor;
        cout << "\n--- Ronda " << ronda << " ---" << endl;
        int resultado = jugarRonda(dado1, dado2);
        cout << "Jugador 1 saco: " << dado1 << endl;
        cout << "Jugador 2 saco: " << dado2 << endl;
        if (resultado == 1) {
            cout << "Jugador 1 gana la ronda!" << endl;
            puntaje1++;
        } else if (resultado == 2) {
            cout << "Jugador 2 gana la ronda!" << endl;
            puntaje2++;
        } else {
            cout << "Empate!" << endl;
        }
        cout << "Marcador - Jugador 1: " << puntaje1 << " / Jugador 2: " << puntaje2 << endl;
        ronda++;
        cout << " " <<endl;
    }
    if (puntaje1 == 3) {
        cout << "\nJugador 1 gana el juego!" << endl;
    } else {
        cout << "\nJugador 2 gana el juego!" << endl;
    }
    return 0;
}