#include <iostream>

using namespace std;

int main()
{
    int ival = 1.01;
    int& rval2 = ival; // ok
    int& rvall = 1.01; // Initialized for literal
    int& rval3;        // Uninitialized

    return 0;
}