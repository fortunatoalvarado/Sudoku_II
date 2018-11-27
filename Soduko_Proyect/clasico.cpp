//
// Created by FortunatoAlvarado on 27/11/2018.
//
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "clasico.h"
using  namespace std;

clasico::clasico() {
this->array1[9]=0;
}

clasico::clasico(int *array) {
    this->array1[9]=array[9];
}

void clasico::generar_mapa() {


    array1[9];
    srand(time(NULL));
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            cout << " + ---";
        }
        cout << " +";
        cout << '\n';
        for (int i = 0; i < 9; i++) {
            int n =1 + rand() % (10-1);
            array1[i]= n;
            cout << " |  " << n << " ";
        }
        cout << " |";
        cout << '\n';
}}
