#include <iostream>
#include "clasico.h"
#include "variante.h"
#include "sudoku.h"
using namespace std;

int num;
int y;
int main() {
    clasico r;
    variante f;
    sudoku t;

    cout<<"Elige un numero: 1. Dibuja Soduko Clasico,"
          " 2.Dibuja Soduko 2X2"
          " 3. Generar sudoku Clasico"
          " 4. Generar sudoku 2x2" << endl;
    cin>>num;

    if (num==1)
    {   r.generar_mapa(); }
    if (num==2)
    {f.variante_generar_mapa();}
    if (num==3)
        {t.generar_sudoku_clasico();
        cout<<endl;
            cout<<"Desea resolverlo: 1. Si / 2. No"<<endl;
            cin>>y;
            if (y==1)
            {t.resolver_clasico();}
        }
    if (num==4)
    {t.generar_sudoku_variante();
        cout<<endl;
    cout<<"Desea resolverlo: 1. Si / 2. No"<<endl;
        cin>>y;
        if (y==1)
        {t.resolver_clasico();}}
    return 0;}
