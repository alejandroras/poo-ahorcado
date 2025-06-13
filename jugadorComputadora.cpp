#include "jugadorComputadora.h"

#include <iostream>
using namespace std;

//Declaro objeto JugadorComputadora que hereda de Jugador
JugadorComputadora::JugadorComputadora() : Jugador("Bot") {
    srand(time(0));
}

/**
 * realizarIntento genera una letra aleatoria y la muestra en pantalla.
 * Este método es llamado por el juego cuando es turno de la computadora.
 */
char JugadorComputadora::realizarIntento() {
    char letra = generarLetra();
    cout << "La computadora elige la letra: " << letra << endl;
    return letra;
}

/**
 * mostrarJugador regresa una cadena con el tipo y nombre del jugador.
 * En este caso devuelve "Computadora Bot".
 */
string JugadorComputadora::mostrarJugador() {
    return "Computadora " + nombre;
}

/**
 * generarLetra elige una letra aleatoria.
 * Se usa como intento automático de la computadora.
 */
char JugadorComputadora::generarLetra() {
    return 'a' + rand() % 26;
}

/**
 * resetearScore reinicia el puntaje de la computadora a cero.
 */
void JugadorComputadora::resetearScore() {
    score = 0;
}
