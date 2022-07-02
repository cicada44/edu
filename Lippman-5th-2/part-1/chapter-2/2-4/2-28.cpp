#include <iostream>

using namespace std;

int main()
{
    int i, const *cp;      // no
    int *p1, *const p2;    // p2 - no
    const int ic, &r = ic; // ic - no
    const int* const p3;   // no
    const int* p;          // ok

    return 0;
}