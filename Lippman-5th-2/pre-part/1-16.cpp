#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int pl;

    while (cin >> pl)
        sum += pl;

    cout << "\nSum - " << sum << endl;

    return 0;
}