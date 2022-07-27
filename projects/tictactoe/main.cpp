#include "Area.hpp"
#include <iostream>

int main()
{
    unsigned p1, p2;
    Area area;
    area.check_gameover = 0;

    print(std::cout, area);

    while (1) {
        read_pos_1(std::cin, std::cout, p1, p2, area);
        print(std::cout, area);
        area.check_off();
        read_pos_2(std::cin, std::cout, p1, p2, area);
        print(std::cout, area);
        area.check_off();
        if (area.check_gameover)
            break;
    }

    return 0;
}