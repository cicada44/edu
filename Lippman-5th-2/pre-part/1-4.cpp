#include <iostream>

int main()
{
    int n1, n2;
    std::cout << "Input n1: ";
    std::cin >> n1;
    std::cout << "Input n2: ";
    std::cin >> n2;

    int multiply = n1 * n2;
    std::cout << "Multiplication - " << multiply << std::endl;

    return 0;
}