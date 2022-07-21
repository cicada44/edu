#include <iostream>

class Hole {
public:
    Hole() = default;
    Hole(double& l, double& h) : length(l), heigth(h), sq(l * h)
    {
    }
    double length, heigth, sq;
};

std::istream& read_hole(std::istream& is, Hole& hole)
{
    is >> hole.length >> hole.heigth;
    return is;
}

void process_square_hole(Hole& hole)
{
    hole.sq = hole.heigth * hole.length;
}