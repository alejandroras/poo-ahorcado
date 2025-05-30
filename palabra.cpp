#include "palabra.h"
#include <string>

Palabra::Palabra(string palabra){
    this->palabra = palabra;
    progreso = string(palabra.length(), '_');
}

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

bool Palabra::completa() const {
    return progreso.find('_') == string::npos;
}

string Palabra::getProgreso() const {
    return progreso;
}