#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
using namespace std;

class Jugador {
protected:
    string nombre;
    int score;

public: 
    Jugador (string nombre);
    virtual char realizarIntento() = 0;
    virtual string mostrarJugador() = 0; //Cambio de to_string a mostrarJugador en el nombre de la variable.

    string getNombre() const;
    void setNombre(const string& nuevoNombre);
    void resetearScore();
};

#endif