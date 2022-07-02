#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    int* p = &i;

    if (*p) // *p = i = 1
        cout << "its work!" << endl;
    if (p) // p != 0x00000000
        cout << "its work too!" << endl;

    return 0;
}