#include "Sales_data.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char** argv)
{
    std::ifstream file(argv[1], std::ios_base::in);
    std::ofstream file2(argv[2], std::ios_base::app);

    if (!file.is_open()) {
        std::cerr << "name of file is non-correct" << std::endl;
        exit(1);
    }

    if (!file2.is_open()) {
        std::cerr << "name of file is non-correct" << std::endl;
        exit(1);
    }

    Sales_data item1;
    read(file, item1);
    print(file2, item1);

    return 0;
}