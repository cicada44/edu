#include <cmath>
#include <iostream>

using namespace std;

double expr(double x, double y)
{
    return (pow((1 - tan(x)), (cos(x) / sin(x))) + cos(x - y));
}

int main()
{
    double x, y;

    cout << "input x: ";
    cin >> x;
    cout << "input y: ";
    cin >> y;

    x *= 3.14 / 180;
    y *= 3.14 / 180;

    double res = expr(x, y);

    cout << "Result - " << res << endl;

    return 0;
}