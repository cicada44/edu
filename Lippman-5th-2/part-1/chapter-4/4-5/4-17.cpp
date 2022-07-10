#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;

    i = j++;
    cout << "i - " << i << "\tj - " << j << endl; // i - 0, j - 1

    i = ++j;
    cout << "i - " << i << "\tj - " << j << endl; // i - 2, j - 2

    return 0;
}