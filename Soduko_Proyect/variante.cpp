//
// Created by FortunatoAlvarado on 27/11/2018.
//
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "variante.h"
using namespace std;

variante::variante() {
this->array[4]=0;
}

variante::variante(int *array) {
this->array[4]=array[4];
}

void variante::variante_generar_mapa() {
    array[4];
    srand(time(NULL));
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            cout << " + ---";
        }
        cout << " +";
        cout << '\n';
        for (int i = 0; i < 4; i++) {
            int n =1 + rand() % (5-1);
            array[i]= n;
            cout << " |  " << n << " ";
        }
        cout << " |";
        cout << '\n';
    }
    for (int i = 0; i < 4; i++) {
        cout << " + ---";}
    cout << " +";

}
