#include "ahorcado.h"
#include <iostream>
#include <algorithm>
using namespace std;

Ahorcado::Ahorcado(Jugador* jugador, string palabra)
    : jugador(jugador), palabraSecreta(palabra) {
    intentosMaximos = 6;
    intentosActuales = 0;
}

void Ahorcado::jugar() {
    cout << "Bienvenido al juego del Ahorcado." << endl;

    while (!juegoTerminado()) {
        mostrarEstado();

        char letra = jugador->realizarIntento();

        if (find(letrasUsadas.begin(), letrasUsadas.end(), letra) != letrasUsadas.end()) {
            cout << "Ya intentaste esa letra." << endl;
            continue;
        }

        letrasUsadas.push_back(letra);

        bool acierto = verificarLetra(letra);
        if (!acierto) {
            intentosActuales++;
            cout << "Fallaste. Intentos restantes: " << intentosMaximos - intentosActuales << endl;
        } else {
            cout << "¡Bien! Letra correcta." << endl;
        }
    }

    mostrarEstado();

    if (palabraSecreta.completa()) {
        cout << "¡Ganaste! Adivinaste la palabra: " << palabraSecreta.getProgreso() << endl;
    } else {
        cout << "Perdiste. La palabra era: " << palabraSecreta.getProgreso() << endl;
    }
}

void Ahorcado::mostrarEstado() const {
    cout << "\n" << jugador->mostrarJugador() << endl;
    cout << "Palabra: " << palabraSecreta.getProgreso() << endl;
    cout << "Letras usadas: ";
    for (char letra : letrasUsadas) {
        cout << letra << " ";
    }
    cout << "\n" << endl;
}

bool Ahorcado::verificarLetra(char letra) {
    return palabraSecreta.revelarLetra(letra);
}

bool Ahorcado::juegoTerminado() const {
    return palabraSecreta.completa() || intentosActuales >= intentosMaximos;
}
