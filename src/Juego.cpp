#include "Juego.h"

Juego::Juego()
{
    t.setValue(0,3,PLAYER2);
    t.setValue(0,6,PLAYER2);
    t.setValue(3,0,PLAYER2);
    t.setValue(3,9,PLAYER2);
    t.setValue(6,0,PLAYER1);
    t.setValue(6,9,PLAYER1);
    t.setValue(9,3,PLAYER1);
    t.setValue(9,6,PLAYER1);
}

Juego::~Juego()
{
    t.~Tablero();

}

void Juego::showBoard()
{
    t.show();

}
void Juego::setPosReina(int jugador, int i, int j, int m, int n)
{
    if (jugador == PLAYER1){
        t.setValue(m,n,PLAYER1);
        t.setValue(i,j,EMPTY);
    }
    else
        if (jugador == PLAYER2){
            t.setValue(m,n, PLAYER2);
            t.setValue(i,j,EMPTY);
        }
}

void Juego::setPosArrow(int i, int j)
{
    t.setValue(i,j,ARROW);
}

int Juego::getCantReinasPlayer1() const
{
    return cantReinasPlayer1;
}

int Juego::getCantReinasPlayer2() const
{
    return cantReinasPlayer2;
}

bool Juego::validMov(int fila, int col, int m, int n)
{
    //horizontal
    if (m==fila)
    {
        if (col<n)
        {
            bool derecha=true;
            int i=col+1;
            while(derecha && i<=n)
            {
                if(!t.validPos(fila, i))
                    derecha=false;
                i++;
            }
            return derecha;
        }
        else
            if (col>n)
            {
                bool izquierda=true;
                int i=col-1;
                while(izquierda && i>=n)
                {
                    if (!t.validPos(fila,i))
                        izquierda=false;
                    i--;
                }
                return izquierda;
            }
    }

    //vertical
    if (n==col)
    {
        if(fila<m)
        {
            bool abajo=true;
            int i=fila+1;
            while(abajo && i<=m)
            {
                if(!t.validPos(i,col))
                    abajo=false;
                i++;
            }
            return abajo;
        }
        else
            if(fila>m)
            {
                bool arriba=true;
                int i=fila-1;
                while(arriba && i>=m)
                {
                    if (!t.validPos(i,col))
                        arriba=false;
                    i--;
                }
                return arriba;
            }
    }

    //diagonal
    if(fila>m && col<n)
    {
        bool diagDerecha=true;
        int i=fila-1,j=col+1;
        while(diagDerecha && i>=m && j<=n)
        {
            if(!t.validPos(i,j))
                diagDerecha=false;
            i--;
            j++;
        }
        return diagDerecha;
    }
    return false;
}
void Juego::getCoord(string& coord)
{
    if (coord[0]=='A')
        coord[0]=0;
    else
        if(coord[0]=='B')
            coord[0]=1;
        else
            if(coord[0]=='C')
                coord[0]=2;
            else
                if(coord[0]=='D')
                    coord[0]=3;
                else
                    if(coord[0]=='E')
                        coord[0]=4;
                    else
                        if(coord[0]=='F')
                            coord[0]=5;
                        else
                            if(coord[0]=='G')
                                coord[0]=6;
                            else
                                if(coord[0]=='H')
                                    coord[0]=7;
                                else
                                    if(coord[0]=='I')
                                        coord[0]=8;
                                    else
                                        if(coord[0]=='J')
                                            coord[0]=9;
    if (coord[1]=='1' && coord[2]=='0')
        coord[1]=0;
    else
        if(coord[1]=='9')
            coord[1]=1;
        else
            if(coord[1]=='8')
                coord[1]=2;
            else
                if(coord[1]=='7')
                    coord[1]=3;
                else
                    if(coord[1]=='6')
                        coord[1]=4;
                    else
                        if(coord[1]=='5')
                            coord[1]=5;
                        else
                            if(coord[1]=='4')
                                coord[1]=6;
                            else
                                if(coord[1]=='3')
                                    coord[1]=7;
                                else
                                    if(coord[1]=='2')
                                        coord[1]=8;
                                    else
                                        if(coord[1]=='1')
                                            coord[1]=9;
}

Tablero Juego::getTablero() const
{
    Tablero J(t);
    return J;
}

