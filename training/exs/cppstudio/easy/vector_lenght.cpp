#include <cmath>
#include <iostream>

using namespace std;

double len(double x, double y, double z)
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

int main()
{
    double lenght = len(-2, 4, -4);

    cout << "Len - " << lenght << endl;

    return 0;
}