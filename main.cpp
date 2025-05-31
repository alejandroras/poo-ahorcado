#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "ahorcado.h"
#include "jugadorHumano.h"
//#include "jugadorComputadora.h" si se quiere simular cómo funciona un juego con la computadora

using namespace std;

string obtenerPalabraAleatoria(const string& nombreArchivo);

int main() {
    string nombreJugador;
    cout << "Bienvenido al juego del Ahorcado.\nIntroduce tu nombre: ";
    cin >> nombreJugador;

    Jugador* jugador = new JugadorHumano(nombreJugador);

    string palabraSecreta = obtenerPalabraAleatoria("palabras.txt");

    Ahorcado juego(jugador, palabraSecreta);

    juego.jugar();

    delete jugador;

    return 0;
}

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
