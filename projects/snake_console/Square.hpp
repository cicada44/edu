#include "Snake.hpp"
#include <iostream>
#include <vector>

class Area {
public:
    Area(unsigned& hei, unsigned& wid) : heigth(hei), width(wid)
    {
    }
    void print_area()
    {
        for (unsigned x = 0; x != heigth; x++)
            for (unsigned k = 0; k != width; k++)
                std::cout << square[x][k];
    }
    void initialize_area()
    {
        for (unsigned x = 0; x != heigth; x++) {
            square[0][x] = '_';
            if (x == --heigth)
                square[0][x] = '\n';
        }
        for (unsigned x = 1; x != width; x++) {
            square[x][0] = '|';
            for (unsigned k = 0; k != heigth; k++) {
                // if (k == heigth - 2) {
                //     ++k;
                //     square[x][k] = '|';
                //     ++k;
                //     square[x][k] = '\n';
                // }
                square[x][k] = ' ';
            }
        }
        for (unsigned x = 0; x != heigth; x++) {
            square[0][x] = '_';
            if (x == --heigth)
                square[0][++x] = '\n';
        }
    }

    void print_snake()
    {
        for (unsigned x = 0; x != snake.heigth; x++)
            std::cout << snake.sym;
    }

private:
    unsigned heigth;
    unsigned width;
    unsigned heigth_snake;
    char square[1000][1000];
    Snake snake;
};