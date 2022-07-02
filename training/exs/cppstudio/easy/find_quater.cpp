#include <iostream>

using namespace std;

unsigned proc(double x, double y)
{
    if (x > 0) {
        if (y > 0)
            return 1;
        else
            return 4;
    } else {
        if (y > 0)
            return 2;
    }
    return 3;
}

int main()
{
    double x, y;

    cout << "input x: ";
    cin >> x;
    cout << "input y: ";
    cin >> y;

    if (!x || !y) {
        cout << "Expected correct data" << endl;
        return -1;
    }

    unsigned q = proc(x, y);

    cout << "quater - " << q << endl;

    return 0;
}