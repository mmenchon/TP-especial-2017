#include <iostream>
#include "Tablero.h"
#include "Juego.h"
#include <stdlib.h>

using namespace std;

int main()
{
    Tablero T;
    //T.setValue(4,4, 4);
    T.show();
    cout << "Hello world!" << endl;
    Juego J;
    J.showBoard();
    //int i, j, m,n;
    string origen, destino, flecha;
    //cin>>i>>j>>m>>n;
    cin>>origen>>destino>>flecha;
    J.getCoord(origen);
    J.getCoord(destino);
    J.getCoord(flecha);
    cout<<origen[1]<<origen[0]<<" ";
    cout<<destino[1]<<destino[0]<<" ";
    cout<< endl;
    if (J.validMov(origen[1],origen[0],destino[1],destino[0]) && J.validMov(destino[1],destino[0],flecha[1],flecha[0]))
    {
        J.setPosReina(PLAYER1,origen[1],origen[0],destino[1],destino[0]);
        J.setPosArrow(flecha[1],flecha[0]);
        cout <<"pipa"<<endl;
    }
    //system("cls");
    J.showBoard();
    cout<< endl;
    //T=J.getTablero();
    //T.setValue(4,4, 4);
    //T.show();
    return 0;
}
