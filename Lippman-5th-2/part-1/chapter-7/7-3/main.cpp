// #include "Person_class.hpp"
// #include "Sales_data.hpp"
#include "Screen.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string name = "name";
    std::string adr = "adr";

    // Sales_data item1(name);
    // Sales_data item1(name, 100, 12.234);
    // Person item1(name);
    Screen item1(24, 80, '.');
    item1.move(10, 10).set('p').display(cout);


    return 0;
}