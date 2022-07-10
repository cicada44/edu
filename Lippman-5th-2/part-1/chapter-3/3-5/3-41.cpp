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

    for (unsigned x = 0; x != size; x++)
        cin >> int_arr[x];

    vector<int> vec_copy(int_arr, int_arr + size);

    for (auto x = vec_copy.begin(); x != vec_copy.end(); x++) {
        cout << *x << endl;
    }

    return 0;
}