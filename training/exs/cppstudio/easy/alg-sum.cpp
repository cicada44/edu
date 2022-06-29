#include <cmath>
#include <iostream>

using namespace std;

double sum(double z, double b, double a)
{
    return pow(z, 3) - b + (pow(a, 2) / pow(tan(a), 2));
}

int main()
{
    unsigned n;
    double z, b, a, y;

    cout << "Input n: ";
    cin >> n;
    cout << "Input z: ";
    cin >> z;
    cout << "Input b: ";
    cin >> b;
    cout << "Input a: ";
    cin >> a;

    for (unsigned x = 0; x < n; x++) {
        y += sum(z, b, a);
    }

    cout << "y = " << y << endl;
    return 0;
}