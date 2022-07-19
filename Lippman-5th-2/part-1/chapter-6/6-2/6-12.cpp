#include <iostream>

using namespace std;

void swap(int& n1, int& n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main()
{
    int n1, n2;

    cout << "input n1: ";
    cin >> n1;
    cout << "input n2: ";
    cin >> n2;

    swap(n1, n2);

    cout << "n1: " << n1 << "\tn2: " << n2 << endl;

    return 0;
}
// the best solution