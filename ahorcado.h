/*
 * Proyecto Ahorcado
 * Alejandro Rasgado Raymundo
 * A01713901
 * 12/06/2025
 */

#ifndef AHORCADO_H
#define AHORCADO_H

#include "palabra.h"
#include "jugador.h"
#include <vector>
using namespace std;

/**
 * Clase Ahorcado
 
 * Controla el flujo principal del juego ahorcado
 * Se encarga de administrar el jugador, la palabra secreta, 
 los intentos disponibles, y el estado de la partida.
 */
class Ahorcado {
private:
    Palabra palabraSecreta;         // Palabra que se debe adivinar
    Jugador* jugador;               // Puntero al jugador (humano o compu)
    int intentosMaximos;            // Número máximo de intentos permitidos
    int intentosActuales;           // Número de fallos hechos
    vector<char> letrasUsadas;      // Letras que el jugador ya intentó

public:
    /**
     * Constructor que recibe un jugador y la palabra secreta a adivinar.
     */
    Ahorcado(Jugador* jugador, string palabra);

    /**
     * Inicia y gestiona el  juego hasta que termine.
     */
    void jugar();

    /**
     * Muestra el estado actual del juego en consola 
     * (ahorcado, progreso, letras usadas).
     */
    void mostrarEstado() const;

    /**
     * Verifica si una letra está en la palabra secreta.
     */
    bool verificarLetra(char letra);

    /**
     * Determina si el juego ha terminado.
     */
    bool juegoTerminado() const;
};

#endif
