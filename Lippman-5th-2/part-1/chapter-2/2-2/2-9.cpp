#include <iostream>

using namespace std;

int main()
{
    cin >> int input_value;        // NONcorrectly initialized
    int i = {3.14};                // nonconvertable
    double salary = wage = 999.99; // wage is not declarated
    int j = 3.14;                  // ok

    return 0;
}