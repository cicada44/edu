#include <iostream>

using namespace std;

int comp(const int n, const int* pn)
{
    if (n == *pn)
        return NULL;
    if (n < *pn)
        return *pn;
    else
        return n;
    return NULL;
}

int main()
{
    int n = 1;
    int n2 = 2;
    int* pn = &n2;

    int flag = comp(n, pn);

    cout << "flag - " << flag << endl;

    return 0;
}