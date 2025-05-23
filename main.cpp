#include <iostream>
#include "jugadorHumano.h"
#include "jugadorComputadora.h"

using namespace std;

int main() {
    // Crear un jugador humano
    Jugador* j1 = new JugadorHumano("Alejandro");
    cout << j1->mostrarJugador() << endl;
    char letra1 = j1->realizarIntento();
    cout << "Letra ingresada: " << letra1 << endl;

    cout << "---------------------------------------" << endl;

    // Crear un jugador computadora
    Jugador* j2 = new JugadorComputadora();
    cout << j2->mostrarJugador() << endl;
    char letra2 = j2->realizarIntento();
    cout << "Letra generada: " << letra2 << endl;

    return 0;
}
