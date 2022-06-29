#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Input C: ";
    cin >> c;
    // cast int toupper()
    cout << "Toupper - " << (char)toupper(c) << endl;

    return 0;
}