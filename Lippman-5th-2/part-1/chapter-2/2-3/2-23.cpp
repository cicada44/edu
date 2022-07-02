#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    int* pi = &i;    // ok
    int* p = &i + 2; // no!

    cout << "p - " << *p << "\tp1 - " << *pi << endl; /* and its work */

    return 0;
}