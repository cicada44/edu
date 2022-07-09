#include <iostream>

int f()
{
    return 100;
}

int main()
{
    int buf = 1024;              // ok
    int ia[buf];                 // ok
    int ib[f()];                 // ok
    int ic[4 * 7 - 14];          // ok
    char st[11] = "fundamental"; // err
}