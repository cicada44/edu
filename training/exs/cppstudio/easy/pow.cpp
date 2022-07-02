#include <iostream>

using namespace std;

int pow(int n, unsigned s)
{
    int tmp = n;
    for (unsigned x = 1; x < s; x++)
        tmp *= n;
    return tmp;
}

int main()
{
    int n;
    unsigned s;

    cout << "Input n: ";
    cin >> n;
    cout << "Input s: ";
    cin >> s;

    int q = pow(2, 4);

    cout << "Q - " << q << endl;

    return 0;
}