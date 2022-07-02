#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int* pi = &i;  // ok
    void* p = &i;  // ok, convertable
    long* lp = &i; // no, non-convertable

    return 0;
}