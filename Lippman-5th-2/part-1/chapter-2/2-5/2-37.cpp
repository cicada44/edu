#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;     // int = 3
    decltype(a = b) d = a; // int

    cout << "c - " << c << "\td - " << d << endl;

    return 0;
}