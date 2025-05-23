#ifndef JUGADORCOMPUTADORA_H
#define JUGADORCOMPUTADORA_H
#include "jugador.h"

#include <iostream>
using namespace std;

class JugadorComputadora : public Jugador{
public: 
    JugadorComputadora();

    char realizarIntento() override;
    string mostrarJugador() override;

    char generarLetra();
    void resetearScore();
};

#endif