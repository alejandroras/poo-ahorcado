#include "ahorcado.h"
#include <iostream>
#include <algorithm>
using namespace std;

/**
 * mostrarAhorcado imprime en consola el muñeco del ahorcado
 * dependiendo del número de intentos fallidos que lleva el jugador.
 */
void mostrarAhorcado(int misses) {
  if(misses==0) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==2) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==4) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==5) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==6) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
}

/**
 * Constructor del objeto Ahorcado.
 *
 * Inicializa el jugador, la palabra secreta a adivinar
 * y los contadores de intentos disponibles y actuales.
 */
Ahorcado::Ahorcado(Jugador* jugador, string palabra)
    : jugador(jugador), palabraSecreta(palabra) {
    intentosMaximos = 6;
    intentosActuales = 0;
}

/**
 * jugar representa el ciclo principal del juego del ahorcado.
 *
 * Pide letras al jugador, actualiza el estado, valida si ganó o perdió,
 * y muestra los resultados en consola.
 */
void Ahorcado::jugar() {
    cout << "Bienvenido al juego del Ahorcado." << endl;

    while (!juegoTerminado()) {
        mostrarEstado();

        // El jugador hace un intento
        char letra = jugador->realizarIntento();

        // Verifica si la letra ya fue usada
        if (find(letrasUsadas.begin(), letrasUsadas.end(), letra) 
        != letrasUsadas.end()) {
            cout << "Ya intentaste esa letra." << endl;
            continue;
        }

        letrasUsadas.push_back(letra);

        // Verifica si la letra está en la palabra
        bool acierto = verificarLetra(letra);
        if (!acierto) {
            intentosActuales++;
            cout << "Fallaste. Intentos restantes: " 
                 << intentosMaximos - intentosActuales << endl;
        } else {
            cout << "¡Bien! Letra correcta." << endl;
        }
    }

    // Muestra el estado final y el resultado del juego
    mostrarEstado();

    if (palabraSecreta.completa()) {
        cout << "¡Ganaste! Adivinaste la palabra: " 
             << palabraSecreta.getProgreso() << endl;
    } else {
        cout << "Perdiste. La palabra era: " 
             << palabraSecreta.getPalabraReal() << endl;
    }
}

/**
 * mostrarEstado imprime el estado actual del juego.
 *
 * Despliega el ahorcado, el tipo de jugador, el progreso de la palabra
 * y las letras que ya fueron usadas.
 */
void Ahorcado::mostrarEstado() const {
    mostrarAhorcado(intentosActuales);

    cout << "\n" << jugador->mostrarJugador() << endl;
    cout << "Palabra: " << palabraSecreta.getProgreso() << endl;
    cout << "Letras usadas: ";
    for (char letra : letrasUsadas) {
        cout << letra << " ";
    }
    cout << "\n" << endl;
}

/**
 * verificarLetra revisa si la letra ingresada está en la palabra
 * y la revela si es correcta.
 */
bool Ahorcado::verificarLetra(char letra) {
    return palabraSecreta.revelarLetra(letra);
}

/**
 * juegoTerminado determina si el jugador ya completó la palabra
 * o si ya se le acabaron los intentos.
 */
bool Ahorcado::juegoTerminado() const {
    return palabraSecreta.completa() || intentosActuales >= intentosMaximos;
}
