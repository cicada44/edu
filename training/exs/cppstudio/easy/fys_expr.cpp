#include <cmath>
#include <iostream>

using namespace std;

float form(float T, float V)
{
    float a = asin((9.8 * T) / (2 * V)) * 180 / 3.14;
    return a;
}

int main()
{
    float t, v;

    cout << "Input t: ";
    cin >> t;
    cout << "Input v: ";
    cin >> v;

    float res = form(t, v);

    cout << "Result - " << res << endl;

    return 0;
}