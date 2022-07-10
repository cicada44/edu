#include <iostream>

using namespace std;

int main()
{
    int i;
    double d;

    d = i = 3.5;
    cout << "i - " << i << "\td - " << d << endl; // i - 3, d = 3
    i = d = 3.5;
    cout << "i - " << i << "\td - " << d << endl; // d - 3.5, i = 3

    return 0;
}