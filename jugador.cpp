#include "jugador.h"

/**
 * Constructor de Jugador
 * Inicializa el nombre con el string recibido y establece el puntaje en cero.
 */
Jugador::Jugador(string nombre) {
    this->nombre = nombre;
    score = 0;
}

/**
 * Devuelve el nombre actual del jugador.
 */
string Jugador::getNombre() const {
    return nombre;
}

/**
 * Cambia el nombre del jugador al valor recibido.
 */
void Jugador::setNombre(const string& nuevoNombre) {
    this->nombre = nuevoNombre;
}

/**
 * Reinicia el puntaje del jugador a cero.
 */
void Jugador::resetearScore() {
    score = 0;
}
