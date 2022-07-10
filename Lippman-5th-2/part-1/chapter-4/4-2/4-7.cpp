#include <iostream>
#include <limits>
using namespace std;

int main()
{
    short s = INT16_MAX;
    int i = INT32_MAX;
    long l = INT64_MAX;

    cout << "s - " << s << "\ti - " << i << "\tl - " << l << endl;

    s += 1;
    i += 1;
    l += 1;

    cout << "s - " << s << "\ti - " << i << "\tl - " << l << endl; // arter (+1)

    return 0;
}