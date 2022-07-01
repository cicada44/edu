#include <iostream>

int main()
{
    int n1, n2, cnt_s1 = 1, cnt1 = 1, cnt_s2 = 1, cnt2 = 1;

    std::cout << "Input n1: ";
    std::cin >> n1;
    std::cout << "Input n2: ";
    std::cin >> n2;

    while (1) {
        if (n1 < cnt1)
            break;
        cnt1 *= 10;
        cnt_s1 = cnt1 / 10;
    }

    while (1) {
        if (n2 < cnt2)
            break;
        cnt2 *= 10;
        cnt_s2 = cnt2 / 10;
    }

    std::cout << "Range of n1: " << cnt_s1 << " - " << cnt1 << std::endl;
    std::cout << "Range of n2: " << cnt_s2 << " - " << cnt2 << std::endl;

    return 0;
}