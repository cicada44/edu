#include <iostream>

using namespace std;

unsigned abs_value(int n)
{
    if (n < 0)
        return (-1 * n);
    return n;
}

int main()
{
    int n;

    cout << "input n: ";
    cin >> n;

    unsigned res = abs_value(n);

    cout << "res - " << res << endl;

    return 0;
}