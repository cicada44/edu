#include <iostream>

int main()
{
    constexpr size_t arr_size = 10;
    int ia[arr_size];

    for (size_t ix = 1; ix <= 10; ++ix) // err
        ia[ix] = ix;

    return 0;
}