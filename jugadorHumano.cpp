#include "jugadorHumano.h"
#include <iostream>
using namespace std;

//Declaro objeto JugadorHumano que hereda de Jugador
JugadorHumano::JugadorHumano(string nombre) : Jugador(nombre) {
}

/**
 * realizarIntento solicita al usuario que escriba una letra.
 * Este método representa el intento del jugador humano.
 */
char JugadorHumano::realizarIntento() {
    char letra;
    cout << "Ingresa una letra: " << endl;
    cin >> letra;
    return letra;
}

/**
 * mostrarJugador devuelve una cadena con el tipo de jugador y su nombre.
 */
string JugadorHumano::mostrarJugador() {
    return "Humano. Nombre: " + nombre;
}

/**
 * setNombre cambia el nombre del jugador por uno nuevo.
 */
void JugadorHumano::setNombre(string nombre) {
    this->nombre = nombre;
}

/**
 * getNombre devuelve el nombre actual del jugador.
 */
string JugadorHumano::getNombre() const {
    return nombre;
}

/**
 * resetearScore reinicia el puntaje del jugador a cero.
 */
void JugadorHumano::resetearScore() {
    score = 0;
}
