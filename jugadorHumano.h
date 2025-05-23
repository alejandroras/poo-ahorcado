#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H
#include "jugador.h"

#include <iostream>
using namespace std;

class JugadorHumano : public Jugador{
public: 
    JugadorHumano(string nombre);

    char realizarIntento() override;
    string mostrarJugador() override;

    void setNombre(string nombre);
    string getNombre() const;
    void resetearScore();
};

#endif