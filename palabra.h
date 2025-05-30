#ifndef PALABRA_H
#define PALABRA_H

#include <iostream>
#include <string>

using namespace std;

class Palabra {
    private:
        string palabra;
        string progreso;

    public:
        Palabra(string palabra);

        bool revelarLetra(char letra);
        bool completa() const;
        string getProgreso() const;
};

#endif
