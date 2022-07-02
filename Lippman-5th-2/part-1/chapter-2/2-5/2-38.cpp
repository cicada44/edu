#include <iostream>

using namespace std;

int main()
{
    int b = 3;
    int* a = &b;
    decltype((a)) c = a; // *&int
    auto d = a;          // int

    cout << "c - " << *c << "\td - " << *d << endl;

    return 0;
}