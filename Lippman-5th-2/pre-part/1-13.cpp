#include <iostream>

int main()
{
    unsigned sum = 0;

    for (int x = 50; x <= 100; x++)
        sum += x;

    std::cout << "Sum of 50-100 nums - " << sum << std::endl;

    for (int x = 10; x > 0; x--)
        std::cout << x << std::endl;

    int n1, n2, cnt_s1 = 1, cnt1 = 1, cnt_s2 = 1, cnt2 = 1;

    std::cout << "Input n1: ";
    std::cin >> n1;
    std::cout << "Input n2: ";
    std::cin >> n2;

    for (int x = 1; x < n1; x *= 10) {
        cnt1 = x * 10;
        cnt_s1 = x;
    }

    for (int x = 1; x < n2; x *= 10) {
        cnt2 = x * 10;
        cnt_s2 = x;
    }

    std::cout << "Range of n1: " << cnt_s1 << " - " << cnt1 << std::endl;
    std::cout << "Range of n2: " << cnt_s2 << " - " << cnt2 << std::endl;

    return 0;
}