#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    constexpr size_t arr_size = 10;
    int ia[arr_size];

    for (size_t ix = 0; ix < 10; ix++) // err
        ia[ix] = ix;

    vector<int> vec(10);

    for (unsigned x = 0; x < 10; x++) {
        vec[x] = x;
    }

    for (unsigned x = 0; x < 10; x++) {
        cout << vec[x];
    }

    return 0;
}