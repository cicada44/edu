#include <iostream>

using namespace std;

struct triangle {
    double x;
    double y;
    double z;
};

void process(struct triangle* a)
{
    a->x = 1;
    a->y = 1;
    a->z = 1;
}

int main()
{
    struct triangle a;

    a.x = 2;
    a.y = 2;
    a.z = 2;

    process(&a);

    cout << "x - " << a.x << "\ty - " << a.y << "\tz - " << a.z << endl;

    return 0;
}