#include "6-8.hpp"
#include <iostream>

using namespace std;

unsigned fact(unsigned n)
{
    if (n <= 2)
        return n;
    return fact(n - 1) * n;
}

int main()
{
    unsigned res = fact(4);

    cout << "res - " << res << endl;

    return 0;
}