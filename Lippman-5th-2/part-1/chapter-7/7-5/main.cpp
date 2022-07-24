// #include "Person_class.hpp"
#include "Sales_data.hpp"
// #include "Screen.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string name = "name";
    std::string adr = "adr";

    Sales_data item1;
    item1.combine(name);
    // Sales_data item1(name, 100, 12.234);
    // Person item1(name);
    // Screen item1(24, 80, '.');

    return 0;
}