#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    unsigned size;

    cout << "input size: ";
    cin >> size;

    int arr[size];

    for (unsigned x = 0; x < size; x++)
        cin >> arr[x];

    int* pbeg = arr;
    int* pend = arr + size;

    for (; pbeg != pend; pbeg++)
        *pbeg = 0;

    for (unsigned x = 0; x < size; x++)
        cout << arr[x] << " ";

    cout << endl;

    return 0;
}