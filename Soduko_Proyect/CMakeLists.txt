cmake_minimum_required(VERSION 3.12)
project(Soduko_Proyect)

set(CMAKE_CXX_STANDARD 14)

add_executable(Soduko_Proyect main.cpp Soduko.h sudoku.cpp sudoku.h clasico.cpp clasico.h variante.cpp variante.h)