#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned size;

    cout << "size: ";
    cin >> size;

    vector<int> vec(size);

    for (unsigned x = 0; x < size; x++)
        cin >> vec[x];

    for (unsigned x = 0; x < size; x++)
        (vec[x] % 2 != 0) ? vec[x] *= 2 : vec[x] * 1;

    cout << "output" << endl;
    for (unsigned x = 0; x < size; x++)
        cout << vec[x] << endl;

    return 0;
}