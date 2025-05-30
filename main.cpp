#include "ahorcado.h"
#include "jugadorComputadora.h" 
#include "jugadorHumano.h"

int main() {
    // Prueba temporal de juego con jugador computadora
    Jugador* j = new JugadorComputadora(); 
    Ahorcado juego(j, "computadora");
    juego.jugar();

    delete j;
    return 0;
}
