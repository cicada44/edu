#include <iostream>

using namespace std;

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    cout << i << " " << sum << endl;

    // i = 100, sum = 45

    return 0;
}