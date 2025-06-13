/*
 * Proyecto Ahorcado
 * Alejandro Rasgado Raymundo
 * A01713901
 * 12/06/2025
 */

#ifndef JUGADORCOMPUTADORA_H
#define JUGADORCOMPUTADORA_H

#include "jugador.h"
#include <iostream>
using namespace std;

//Declaro objeto JugadorComputadora que hereda de la clase Jugador
class JugadorComputadora : public Jugador {

  //Métodos públicos del objeto
public:

    //Constructor que inicializa el jugador con el nombre "Bot"
    JugadorComputadora();

    //Método que representa un intento de la computadora
    //Devuelve una letra generada aleatoriamente
    char realizarIntento() override;

    //Método que muestra el tipo y nombre del jugador
    string mostrarJugador() override;

    //Método auxiliar que genera una letra aleatoria
    char generarLetra();

    //Método que reinicia el puntaje del jugador a cero
    void resetearScore();
};

#endif
