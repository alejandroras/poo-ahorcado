#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "ahorcado.h"
#include "jugadorHumano.h"

using namespace std;

//Declaro función que lee una palabra aleatoria desde un archivo
string obtenerPalabraAleatoria(const string& nombreArchivo);

int main() {
    //Declaro variable para el nombre del jugador
    string nombreJugador;
    cout << "Bienvenido al juego del Ahorcado.\nIntroduce tu nombre: ";
    cin >> nombreJugador;

    //Creo el jugador humano
    Jugador* jugador = new JugadorHumano(nombreJugador);

    //Obtengo una palabra secreta desde un archivo
    string palabraSecreta = obtenerPalabraAleatoria("palabras.txt");

    //Creo el objeto del juego y lo inicio
    Ahorcado juego(jugador, palabraSecreta);
    juego.jugar();

    //Libero memoria asignada al jugador
    delete jugador;

    return 0;
}

/**
 * obtenerPalabraAleatoria lee un archivo de texto con palabras,
 * guarda todas las líneas en un vector y selecciona una palabra al azar.
 * Si el archivo está vacío, regresa una palabra por defecto.
 */
string obtenerPalabraAleatoria(const string& nombreArchivo) {
    vector<string> palabras;
    ifstream archivo(nombreArchivo);
    string linea;

    while (getline(archivo, linea)) {
        if (!linea.empty()) {
            palabras.push_back(linea);
        }
    }

    archivo.close();

    if (palabras.empty()) {
        return "ahorcado";
    }

    srand(time(0));
    int indice = rand() % palabras.size();
    return palabras[indice];
}