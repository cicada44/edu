#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cout << "Input N1: ";
    cin >> n1;
    cout << "Input N2: ";
    cin >> n2;

    (n1 < n2) ? cout << "1 is lower\n" : cout << "2 is lower\n";

    return 0;
}