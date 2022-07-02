#include <iostream>

using namespace std;

int main()
{
    const int buf;      // no, uninitialized
    int cnt = 0;        // ok
    const int sz = cnt; // ok
    ++cnt;              // ok
    ++sz;               // no, const

    return 0;
}