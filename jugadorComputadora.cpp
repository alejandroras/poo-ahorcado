#include "jugadorComputadora.h"

#include <iostream>
using namespace std;

JugadorComputadora :: JugadorComputadora() : Jugador("Bot"){
    srand(time(0));
}

char JugadorComputadora::realizarIntento(){
    char letra = generarLetra();
    cout << "La computadora elige la letra: " << letra << endl;
    return letra;
}

string JugadorComputadora::mostrarJugador(){
    return "Computadora " + nombre;
}

char JugadorComputadora::generarLetra(){
    return 'a' + rand() % 26;
}

void JugadorComputadora::resetearScore(){
    score = 0;
}