#include "Tablero.h"

Tablero::Tablero()
{
    for (int i=0; i <TAM; i++)
        for(int j=0; j< TAM; j++)
    {
        matriz[i][j]=0;
    }
    for (int i=0;i<TAM*TAM; i++)
        g.agregarVertice(i);
}

Tablero::~Tablero()
{
    /*for (int i=0; i< TAM; i++)
        delete matriz[i];
    delete matriz;*/
}

Tablero::Tablero(const Tablero& other)
{
    for (int i=0; i< TAM; i++)
        for( int j=0; j<TAM; j++)
    {
        matriz[i][j]=other.getValue(i,j);
    }

}

void Tablero::setValue(int i, int j, int value)
{
    matriz[i][j]=value;
}

int Tablero::getValue(int i, int j) const
{
    return matriz[i][j];
}

bool Tablero::validPos(int i, int j)
{
    if (matriz[i][j]==EMPTY)
        return true;
    return false;
}

void Tablero::show()
{
    for (int i=0; i<TAM; i++)
    {
        if (TAM-i<TAM)
            cout<<" "<< TAM-i<<" ";
        else
            cout <<TAM-i<<" ";
        for(int j=0; j<TAM; j++)
        {
            if (matriz[i][j]==EMPTY)
                cout<<"- ";
            else
                cout<<matriz[i][j]<<" ";
            //cout<<matriz[i][j]<<" ";
        }
    cout<<endl;
    }
    cout <<"   A B C D E F G H I J"<< endl;
}
