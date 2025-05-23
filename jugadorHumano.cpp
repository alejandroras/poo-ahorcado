#include "jugadorHumano.h"

#include <iostream>
using namespace std;

JugadorHumano :: JugadorHumano(string nombre) : Jugador(nombre){
}

char JugadorHumano::realizarIntento(){
    char letra;
    cout << "Ingresa una letra: " << endl;
    cin >> letra;
    return letra;
}

string JugadorHumano::mostrarJugador(){
    return "Humano. Nombre: " + nombre;
}

void JugadorHumano::setNombre(string nombre){
    this -> nombre = nombre;
}

string JugadorHumano::getNombre() const{
    return nombre;
}

void JugadorHumano::resetearScore(){
    score = 0;
}