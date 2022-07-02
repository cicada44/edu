#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;   // int
    decltype((b)) d = a; // reference
    ++c;
    ++d;

    cout << "c - " << c << "\td - " << d << endl;

    return 0;
}