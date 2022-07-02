#include <iostream>

using namespace std;

int main()
{
    int i = -1, &r = 0;        // - ok
    int* const p2 = &i2;       // - ok
    const int i = -1, &r = 0;  // - ok
    const int* const p3 = &i2; // - ok
    const int* p1 = &i2;       // - ok
    const int& const r2;       // - no
    const int i2 = i, &r = i;  // - ok

    return 0;
}