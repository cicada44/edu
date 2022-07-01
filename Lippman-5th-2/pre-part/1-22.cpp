#include "Sales_item.h"
#include <iostream>

using namespace std;

int main()
{
    Sales_item item, sum;

    while (cin >> item)
        sum += item;

    cout << "Sum - " << sum << endl;

    return 0;
}