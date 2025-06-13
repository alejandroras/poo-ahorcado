/*
 * Proyecto Ahorcado
 * Alejandro Rasgado Raymundo
 * A01713901
 * 12/06/2025
 */

#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H

#include "jugador.h"
#include <iostream>
using namespace std;

//Declaro objeto JugadorHumano que hereda de la clase Jugador
class JugadorHumano : public Jugador {

  //Métodos públicos del objeto
public:

    //Constructor que inicializa el jugador con el nombre recibido
    JugadorHumano(string nombre);

    //Método que solicita al jugador humano que ingrese una letra
    char realizarIntento() override;

    //Método que muestra el tipo y nombre del jugador
    string mostrarJugador() override;

    //Método que permite cambiar el nombre del jugador
    void setNombre(string nombre);

    //Método que devuelve el nombre actual del jugador
    string getNombre() const;

    //Método que reinicia el puntaje del jugador a cero
    void resetearScore();
};

#endif
