#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    bool res = false;

    cout << "input a, b, c, d: ";
    cin >> a >> b >> c >> d;

    if (c > d && b > c && a > b)
        res = true;

    cout << "res - " << res << endl;

    return 0;
}