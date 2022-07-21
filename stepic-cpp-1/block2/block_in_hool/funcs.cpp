#include "Block.hpp"
#include "Hole.hpp"
#include <iostream>

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