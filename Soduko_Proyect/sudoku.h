//
// Created by FortunatoAlvarado on 27/11/2018.
//

#ifndef SODUKO_PROYECT_SUDOKU_H
#define SODUKO_PROYECT_SUDOKU_H

#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "variante.h"
#include "clasico.h"

class sudoku {
private:    variante p;
            clasico q;
            int grid[9][9];
public:
    sudoku();

void generar_sudoku_variante();

void generar_sudoku_clasico();

void resolver_variante();

void resolver_clasico();

};


#endif //SODUKO_PROYECT_SUDOKU_H
