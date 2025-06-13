/*
 * Proyecto Ahorcado
 * Alejandro Rasgado Raymundo
 * A01713901
 * 12/06/2025
 */

#ifndef PALABRA_H
#define PALABRA_H

#include <iostream>
#include <string>
using namespace std;

//Declaro objeto Palabra que representa la palabra secreta del juego
class Palabra {

    //Declaro variables de instancia
    private:
        string palabra;   // Palabra real que se debe adivinar
        string progreso;  // Progreso del jugador (con guiones bajos)

    //Declaro métodos públicos del objeto
    public:

        //Constructor que recibe la palabra secreta y crea su versión oculta
        Palabra(string palabra);

        //Método que revisa si la letra está en la palabra y la revela
        bool revelarLetra(char letra);

        //Método que indica si ya se completó la palabra
        bool completa() const;

        //Método que devuelve el estado actual de la palabra 
        string getProgreso() const;

        //Método que devuelve la palabra real sin ocultar
        string getPalabraReal() const;
};

#endif
