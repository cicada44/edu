#include "Sales_item.h"
#include <iostream>

using namespace std;

int main()
{
    Sales_item item1, item2, sum;

    cin >> item1 >> item2;

    if (item1.isbn() == item2.isbn()) {
        cout << "The items must have the same isbn" << endl;
        return -1;
    }

    sum = item1 + item2;
    cout << "Sum - " << sum << endl;

    return 0;
}