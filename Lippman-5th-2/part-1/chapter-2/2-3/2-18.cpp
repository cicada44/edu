#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int* ptr = &i;

    cout << "unnamed ptr - " << *ptr << endl;

    i = 2;

    cout << "changed unnamed ptr - " << *ptr << endl;

    *ptr = 1;

    cout << "changed i - " << i << endl;

    return 0;
}