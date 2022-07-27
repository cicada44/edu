#include "Casino.hpp"

#include <iostream>

int main()
{
    Casino casino;
    char flag_cont = 'y';
    bool flag_guess;

    std::cout << "How much you raise?: ";
    casino.read_sum(std::cin);

    while (flag_cont == 'y') {
        casino.make_random_number();
        std::cout << "Input some number in range 1 to 10: ";
        casino.read_num(std::cin);
        flag_guess = casino.check_cmp();
        if (!flag_guess) {
            std::cout << "You're right!" << std::endl;
            casino.raise_sum();
            std::cout << "You're check: " << casino.get_sum() << std::endl;
        } else
            std::cout << "You're wrong!" << std::endl;
        std::cout << "Would you continue? : ";
        std::cin >> flag_cont;
    }

    std::cout << "You're check: " << casino.get_sum() << std::endl;
    return 0;
}