//
// Created by FortunatoAlvarado on 27/11/2018.
//

#include "sudoku.h"
#include <iostream>
using namespace std;
sudoku::sudoku() {

}

void sudoku::generar_sudoku_variante() {
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                this->grid[i][j] = 0; }
        }
        this->grid[0][0] = 3;
        this->grid[0][1] = 1;
        this->grid[1][1] = 4;
        this->grid[1][3] = 1;
        this->grid[2][1] = 2;
        this->grid[2][2] = 3;
        this->grid[3][0] = 1;
        this->grid[3][3] = 2;
         }
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            cout << " + ---";
        }
        cout << " +";
        cout << '\n';
        for (int i = 0; i < 4; i++) {

            cout << " |  " << grid[i][j] << " ";
        }
        cout << " |";
        cout << '\n';
    }
    for (int i = 0; i < 4; i++) {
        cout << " + ---";}
    cout << " +";

        }



void sudoku::generar_sudoku_clasico()
    {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                this->grid[i][j] = 0;
            }
        }
        this->grid[0][0] = 3;
        this->grid[0][1] = 7;
        this->grid[0][5] = 9;
        this->grid[0][8] = 6;
        this->grid[1][0] = 8;
        this->grid[1][3] = 1;
        this->grid[1][5] = 3;
        this->grid[1][7] = 7;
        this->grid[2][8] = 8;
        this->grid[3][1] = 2;
        this->grid[3][4] = 8;
        this->grid[3][8] = 5;
        this->grid[4][0] = 1;
        this->grid[4][1] = 8;
        this->grid[4][2] = 7;
        this->grid[4][6] = 6;
        this->grid[4][7] = 4;
        this->grid[4][8] = 2;
        this->grid[5][0] = 5;
        this->grid[5][4] = 2;
        this->grid[5][7] = 1;
        this->grid[6][0] = 7;
        this->grid[7][1] = 5;
        this->grid[7][3] = 6;
        this->grid[7][5] = 2;
        this->grid[7][8] = 7;
        this->grid[8][0] = 2;
        this->grid[8][3] = 3;
        this->grid[8][7] = 6;
        this->grid[8][8] = 1;
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                cout << " + ---";
            }
            cout << " +";
            cout << '\n';
            for (int i = 0; i < 9; i++) {

                cout << " |  " << grid[i][j] << " ";
            }
            cout << " |";
            cout << '\n';
        }
        for (int i = 0; i < 9; i++) {
            cout << " + ---";}
        cout << " +";

    }


void sudoku::resolver_variante() {

    
}

void sudoku::resolver_clasico() {

}
