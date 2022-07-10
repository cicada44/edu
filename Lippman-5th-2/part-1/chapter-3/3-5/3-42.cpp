#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    unsigned size;

    cout << "input size: ";
    cin >> size;

    int int_arr[size];

    // for (unsigned x = 0; x != size; x++)
    //     cin >> int_arr[x];

    vector<int> vec_copy(size);

    for (auto x = vec_copy.begin(); x != vec_copy.end(); x++) {
        cin >> *x;
    }

    for (unsigned x = 0; x < size; x++)
        int_arr[x] = vec_copy[x];

    for (unsigned x = 0; x < size; x++)
        cout << int_arr[x] << " ";

    cout << endl;

    return 0;
}