#include <iostream>

using namespace std;

unsigned fact(unsigned n)
{
    if (n <= 2)
        return n;
    return fact(n - 1) * n;
}

int main()
{
    unsigned n;

    cout << "input n: ";
    cin >> n;

    unsigned res = fact(n);

    cout << "res - " << res << endl;

    return 0;
}