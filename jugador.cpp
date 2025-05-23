#include "jugador.h"

Jugador::Jugador(string nombre){
    this -> nombre = nombre;
    score = 0;
}

string Jugador::getNombre() const{
    return nombre;
}

void Jugador::setNombre(const string& nuevoNombre){
    this -> nombre = nuevoNombre;
}

void Jugador::resetearScore(){
    score = 0;
}
