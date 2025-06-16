#include <iostream>
#include <cstdlib>
using namespace std;

string obtenerJugadaComputadora() {
    int jugada = rand() % 3;
    if (jugada == 0) return "piedra";
    if (jugada == 1) return "papel";
    return "tijeras";
}

string determinarGanador(string jugador, string computadora) {
    if (jugador == computadora) return "empate";
    if ((jugador == "piedra" && computadora == "tijeras") ||
        (jugador == "papel" && computadora == "piedra") ||
        (jugador == "tijeras" && computadora == "papel")) {
        return "jugador";
    } else {
        return "computadora";
    }
}

int main() {
    int puntosJugador = 0, puntosComputadora = 0;
    string jugador, computadora;
    cout << "Bienvenido al juego de Piedra, Papel o Tijeras!" << endl;
    cout << "El primero que gane 3 rondas gana el juego." << endl;
    while (puntosJugador < 3 && puntosComputadora < 3) {
        cout << "\nEscribe tu jugada (piedra, papel o tijeras): ";
        cin >> jugador;
        if (jugador != "piedra" && jugador != "papel" && jugador != "tijeras") {
            cout << "Jugada invalida. Intenta de nuevo." << endl;
            continue;
        }
        computadora = obtenerJugadaComputadora();
        cout << "La computadora eligio: " << computadora << endl;
        string resultado = determinarGanador(jugador, computadora);
        if (resultado == "jugador") {
            cout << "Ganaste esta ronda!" << endl;
            puntosJugador++;
        } else if (resultado == "computadora") {
            cout << "La computadora gano esta ronda!" << endl;
            puntosComputadora++;
        } else {
            cout << "Empate!" << endl;
        }
        cout << "Puntaje - Jugador: " << puntosJugador << " / Computadora: " << puntosComputadora << endl;
    }
    if (puntosJugador == 3) {
        cout << "\nFelicidades! Ganaste el juego!" << endl;
    } else {
        cout << "\nLa computadora gano el juego. Mejor suerte la proxima vez!" << endl;
    }
    return 0;
}