#include "Square.hpp"
#include <iostream>

int main()
{
    unsigned h = 60;
    unsigned w = 30;
    unsigned snake_h = 3;
    char c = '.';
    Snake sn(snake_h, c);
    Area area(h, w);
    area.initialize_area();
    area.print_area();

    return 0;
}