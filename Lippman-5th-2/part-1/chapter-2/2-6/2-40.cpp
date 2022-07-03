#include <iostream>

struct Sales_data {
    unsigned bookNo;
    unsigned ost = 0;
};

int main()
{
    Sales_data b1;
    b1.bookNo = 1;
    std::cout << "b1 - " << b1.bookNo << "\tcost - " << b1.ost << std::endl;

    return 0;
}