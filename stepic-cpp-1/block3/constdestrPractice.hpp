#pragma once

struct triangle {
    triangle() : x(0), y(0), z(0)
    {
    }
    triangle(int x, int y, int z = 0) : x(x), y(y), z(z)
    {
    }
    int x;
    int y;
    int z;
    void raise_once();
};