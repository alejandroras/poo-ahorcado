#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
using namespace std;

/**
 * Clase abstracta Jugador
 
 * Representa un jugador en el juego del Ahorcado.
 * Define una interfaz para jugadores como JugadorHumano y 
 JugadorComputadora.
 * Utiliza herencia y polimorfismo para controlar el comportamiento de 
 intento y presentación del jugador.
 */

class Jugador {
protected:
    string nombre; // Nombre del jugador
    int score;     // Puntaje del jugador

public:
    /**
     * Constructor que inicializa el nombre del jugador y establece 
     el puntaje en cero.
     */
    Jugador(string nombre);

    /**
     * Destructor virtual para la eliminación de objetos.
     */
    virtual ~Jugador() {}

    /**
     * Método virtual puro que debe ser implementado por las subclases.
     * Representa la acción de adivinar una letra.
     */
    virtual char realizarIntento() = 0;

    /**
     * Método virtual puro que devuelve una descripción textual del jugador.
     */
    virtual string mostrarJugador() = 0;

    /**
     * Devuelve el nombre actual del jugador.
     */
    string getNombre() const;

    /**
     * Modifica el nombre del jugador.
     */
    void setNombre(const string& nuevoNombre);

    /**
     * Reinicia el puntaje del jugador a cero.
     */
    void resetearScore();
};

#endif
