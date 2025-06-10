# Juego del Ahorcado - TC1030

Este proyecto implementa el clásico **juego del Ahorcado** en C++ utilizando los principios de **Programación Orientada a Objetos (POO)**.

---

### Clases principales:

- **`Jugador`** *(abstracta)*: Define la interfaz para los tipos de jugadores. Contiene métodos virtuales puros.
- **`JugadorHumano`**: Permite ingresar letras desde teclado.
- **`JugadorComputadora`**: Genera letras automáticamente.
- **`Palabra`**: Se encarga de manejar la palabra secreta y el progreso del jugador.
- **`Ahorcado`**: Controla el flujo del juego, los intentos, las letras usadas y la lógica del juego.

---

##  Características

- Uso de **clase abstracta** y **herencia** (`Jugador`).
-  Aplicación de **modificadores de acceso** (`private`, `protected`, `public`).
-  Implementación de **polimorfismo** dinámico.
-  Uso de archivo `.txt`  para cargar palabras aleatorias.
-  Visualización del muñeco del ahorcado en consola.
-  Manejo de intentos y letras usadas.

---

##  Compilación y ejecución

###  Compilación y ejecución:

```bash
g++ ahorcado.cpp palabra.cpp jugador.cpp jugadorHumano.cpp jugadorComputadora.cpp main.cpp -o ahorcado
./ahorcado
```
###  Casos que harían que el proyecto deje de funcionar:
- Archivo palabras.txt inexistente o vacío: si no se encuentra el archivo o no contiene palabras, el juego usará la palabra "ahorcado" por defecto.

- Entrada inválida del jugador: Si el usuario escribe más de una letra, se toma solo la primera, pero no se muestra un mensaje de advertencia.

- Caracteres especiales o acentos: El programa no reconoce correctamente letras acentuadas (á, é, í, etc.) ni la letra ñ, si hay acentos en el archivo .txt, pueden aparecer errores o comparaciones fallidas.

