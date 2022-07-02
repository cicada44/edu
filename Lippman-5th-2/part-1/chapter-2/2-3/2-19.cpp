#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int* pi = &i; // cnangable

    int& ri = i; // unchangeble

    cout << "pi - " << *pi << "\t"
         << "ri - " << ri << endl;

    return 0;
}