#include <iostream>

using namespace std;

int check(int n1, int n2, int n3)
{
    if (n1 == n2 || n2 == n3 || n1 == n3)
        return 0;
    return 1;
}

void raise(int& n1, int& n2, int& n3)
{
    n1 += 5;
    n2 += 5;
    n3 += 5;
}

int main()
{
    int n1, n2, n3;
    cout << "n1 - ";
    cin >> n1;
    cout << "n2 - ";
    cin >> n2;
    cout << "n3 - ";
    cin >> n3;

    unsigned f = check(n1, n2, n3);
    if (!f)
        raise(n1, n2, n3);

    cout << "\nn1 - " << n1 << endl;
    cout << "n2 - " << n2 << endl;
    cout << "n3 - " << n3 << endl;

    return 0;
}