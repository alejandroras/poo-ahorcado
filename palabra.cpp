#include "palabra.h"
#include <string>

/**
 * Constructor de la clase Palabra.
 *
 * Recibe una palabra y crea una versión con guiones bajos 
 * del mismo tamaño.
 */
Palabra::Palabra(string palabra) {
    this->palabra = palabra;
    progreso = string(palabra.length(), '_');
}

/**
 * revelarLetra busca si la letra aparece en la palabra secreta.
 *
 * Si la letra existe, la revela en la posición correspondiente 
 * dentro del progreso.
 */
bool Palabra::revelarLetra(char letra) {
    bool acierto = false;
    for (size_t i = 0; i < palabra.length(); i++) {
        if (tolower(palabra[i]) == tolower(letra) && progreso[i] == '_') {
            progreso[i] = palabra[i];
            acierto = true;
        }
    }
    return acierto;
}

/**
 * completa indica si la palabra ya fue adivinada completamente.
 *
 * Devuelve verdadero si ya no quedan guiones bajos.
 */
bool Palabra::completa() const {
    return progreso.find('_') == string::npos;
}

/**
 * getProgreso devuelve el estado actual de la palabra adivinada.
 *
 * Muestra las letras reveladas y los espacios pendientes como guión bajo.
 */
string Palabra::getProgreso() const {
    return progreso;
}

/**
 * getPalabraReal devuelve la palabra original.
 */
string Palabra::getPalabraReal() const {
    return palabra;
}
