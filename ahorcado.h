#ifndef AHORCADO_H
#define AHORCADO_H

#include "palabra.h"
#include "jugador.h"
#include <vector>

class Ahorcado {
private:
    Palabra palabraSecreta;
    Jugador* jugador;
    int intentosMaximos;
    int intentosActuales;
    vector<char> letrasUsadas;

public:
    Ahorcado(Jugador* jugador, string palabra);

    void jugar();
    void mostrarEstado() const;
    bool verificarLetra(char letra);
    bool juegoTerminado() const;
};

#endif
