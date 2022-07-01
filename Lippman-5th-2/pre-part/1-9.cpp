#include <iostream>

int main()
{
    int beg = 50;

    unsigned sum = 0;

    while (beg <= 100) {
        sum += beg;
        beg++;
    }

    std::cout << "Sum of 50-100 nums - " << sum << std::endl;

    return 0;
}