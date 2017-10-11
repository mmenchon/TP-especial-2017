#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include "../../../Clase Grafo/Grafo.h"

using namespace std;

const int PLAYER1=1;
const int  PLAYER2=2;
const int EMPTY=0;
const int TAM=10;
const int ARROW=8;


class Tablero
{
    public:
        Tablero();
        ~Tablero();
        Tablero(const Tablero& other);

        void setValue(int i, int j, int value);
        int getValue(int i, int j) const;
        bool validPos(int i, int j);
        void show();

    private:
        int matriz[TAM][TAM];
        Grafo g;

};

#endif // TABLERO_H
