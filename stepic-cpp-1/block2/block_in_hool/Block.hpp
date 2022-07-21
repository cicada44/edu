#include <iostream>

class Block {
public:
    Block() = default;
    Block(double& l,
          double& h,
          double& w,
          double& sq1,
          double& sq2,
          double& sq3)
        : length(l),
          heigth(h),
          width(w),
          square1(l * h),
          square2(h * w),
          square3(l * w)
    {
    }
    double length, heigth, width;
    double square1, square2, square3;
};

std::ostream&
print(std::ostream& os,
      const double& length,
      const double& heigth,
      const double& square)
{
    os << "len: " << length << std::endl << "heigth: " << heigth << std::endl;
    return os;
}

std::istream& read(std::istream& is, Block& block)
{
    is >> block.length >> block.heigth >> block.width;
    return is;
}

void process_squares(Block& block)
{
    block.square1 = block.length * block.heigth;
    block.square2 = block.heigth * block.width;
    block.square3 = block.length * block.width;
}