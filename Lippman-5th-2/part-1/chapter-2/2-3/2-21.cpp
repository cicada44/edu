#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    double* dp = &i; // non-convertable
    int* ip = i;     // what!?
    int* p = &i;     // ok

    cout << "dp - " << *dp << endl;
    cout << "ip - " << *ip << endl;
    cout << "p - " << *p << endl;

    return 0;
}