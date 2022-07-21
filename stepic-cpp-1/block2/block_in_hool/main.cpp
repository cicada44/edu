#include "Block.hpp"
#include "Hole.hpp"
#include <iostream>

using namespace std;

bool is_went(Block& b, Hole& h)
{
    if (b.square1 <= h.sq)
        return 0;
    if (b.square2 <= h.sq)
        return 0;
    if (b.square3 <= h.sq)
        return 0;
    return 1;
}

int main()
{
    bool flag;

    Block block;
    Hole hole;

    read(cin, block);
    process_squares(block);
    read_hole(cin, hole);
    process_square_hole(hole);

    flag = is_went(block, hole);

    if (flag)
        cout << "the brick will not go through the hole" << endl;
    else
        cout << "the brick will go through the hole" << endl;

    return 0;
}