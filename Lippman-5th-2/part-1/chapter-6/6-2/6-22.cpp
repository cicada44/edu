#include <iostream>

using namespace std;

void swap(int* n1, int* n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main()
{
    int n1 = 1;
    int n2 = 2;
    int* pn = &n1;
    int* pn2 = &n2;

    swap(pn, pn2);

    cout << "pn1 - " << *pn << "\tpn2 - " << *pn2 << endl;

    return 0;
}