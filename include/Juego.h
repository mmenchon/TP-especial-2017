#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include <iostream>
using namespace std;



class Juego
{
    public:
        Juego();
        ~Juego();
        void setPosReina(int jugador, int i, int j, int m, int n);
        void setPosArrow(int i, int j);
        int getCantReinasPlayer1() const;
        int getCantReinasPlayer2() const;
        bool validMov(int i, int j, int m, int n);
        void showBoard();
        void getCoord(string& coord);
        Tablero getTablero() const;

    private:
        Tablero t;
        int cantReinasPlayer1;
        int cantReinasPlayer2;

};

#endif // JUEGO_H
