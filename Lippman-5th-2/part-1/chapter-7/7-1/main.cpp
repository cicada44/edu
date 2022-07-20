#include "Person_class.hpp"
// #include "Sales_data.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string name = "name";
    std::string adr = "adr";

    // Sales_data item1(name);
    // Sales_data item1(name, 100, 12.234);
    Person item1(name);

    // read(cin, item1);
    print(cout, item1);

    return 0;
}