#include <iostream>

using namespace std;

int main()
{
    int res1 = -30 * 3 + 21 / 5; // -86
    int res2 = -30 + 3 * 21 / 5; // -18
    int res3 = 30 / 3 * 21 % 5;  // 0
    int res4 = -30 / 3 * 21 % 4; // 2

    cout << "res1 - " << res1 << endl;
    cout << "res2 - " << res2 << endl;
    cout << "res3 - " << res3 << endl;
    cout << "res4 - " << res4 << endl;

    return 0;
}