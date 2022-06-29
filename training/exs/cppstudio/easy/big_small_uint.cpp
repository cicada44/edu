#include <iostream>

using namespace std;

int main()
{
    unsigned n;

    cout << "Input int <99:";
    cin >> n;

    int st = n % 10;
    n /= 10;
    int nd = n % 10;

    (st < nd) ? cout << "Min - " << st : cout << "Min - " << nd;

    cout << endl;

    return 0;
}