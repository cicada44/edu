#include <iostream>

int main()
{
    int n1, n2;
    std::cout << "Input n1: ";
    std::cin >> n1;
    std::cout << "Input n2: ";
    std::cin >> n2;

    int sum = n1 + n2;
    std::cout << "Sum - ";
    std::cout << sum;
    std::cout << std::endl;

    return 0;
}