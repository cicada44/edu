#include <cmath>
#include <iostream>

using namespace std;

unsigned sum(int k, unsigned N)
{
    unsigned s = 0;
    for (unsigned i = 1; i <= N; i++)
        s += pow(i, k);
    return s;
}

int main()
{
    int k;
    unsigned N;

    cout << "Input k: ";
    cin >> k;
    cout << "Input N: ";
    cin >> N;

    int s = sum(k, N);
    cout << "Sum - " << s << endl;

    return 0;
}