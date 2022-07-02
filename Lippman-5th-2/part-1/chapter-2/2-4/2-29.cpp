#include <iostream>

using namespace std;

int main()
{
    int i, const *cp;      // no
    int *p1, *const p2;    // p2 - no
    const int ic, &r = ic; // ic - no
    const int* const p3;   // no
    const int* p;          // ok

    i = ic;   // no
    p1 = p3;  // no
    p1 = &ic; // no
    p3 = &ic; // no
    p2 = p1;  // no
    ic = *p3; // no

    return 0;
}