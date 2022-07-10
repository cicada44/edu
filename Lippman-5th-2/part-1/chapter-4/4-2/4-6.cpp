#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "input num: ";
    cin >> num;

    (0 == num % 2) ? cout << 0 << endl : cout << 1 << endl;

    return 0;
}