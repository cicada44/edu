#ifndef CELL_CLASS
#define CELL_CLASS

#include "Board.hpp"
#include <graphics.h>
#include <iostream>
#include <string>

class Cell {
    friend Board;

public:
    std::vector<std::string> void_cell = {(3, "   ")};

private:
    Cell(unsigned s) : state(s)
    {
    }
    /* 0 - void, 1 - o , 2 - x */
    unsigned state;
};

#endif