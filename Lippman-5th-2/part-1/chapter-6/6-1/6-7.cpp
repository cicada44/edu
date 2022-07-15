#include <iostream>

using namespace std;

int n_default = 0;

int nice_return()
{
    return n_default++;
}

int main()
{
    int r1 = nice_return();
    int r2 = nice_return();
    int r3 = nice_return();

    cout << "r1 - " << r1 << endl;
    cout << "r2 - " << r2 << endl;
    cout << "r3 - " << r3 << endl;

    return 0;
}