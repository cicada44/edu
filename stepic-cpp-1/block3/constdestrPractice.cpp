#include "constdestrPractice.hpp"
#include <iostream>

using namespace std;

void triangle::raise_once()
{
    this->x += 1;
    this->y += 1;
    this->z += 1;
}

int main()
{
    struct triangle tr(1, 1);

    tr.raise_once();

    cout << "X - " << tr.x << "\tY - " << tr.y << "\tZ - " << tr.z << endl;

    return 0;
}