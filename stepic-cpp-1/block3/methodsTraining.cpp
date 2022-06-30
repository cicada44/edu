#include "methodsTraining.hpp"
#include <iostream>

using namespace std;

void Triangle::raise(double x)
{
    this->x += x;
    this->y += x;
    this->z += x;
}

int main()
{
    struct Triangle tr;
    tr.x = 1;
    tr.y = 2;
    tr.z = 3;

    tr.raise(1);

    cout << "X - " << tr.x << "\tY - " << tr.y << "\tZ - " << tr.z << endl;

    return 0;
}