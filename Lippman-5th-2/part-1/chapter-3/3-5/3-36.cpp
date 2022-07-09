#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    unsigned size1, size2;

    cout << "input size 1: ";
    cin >> size1;
    cout << "input size 2: ";
    cin >> size2;

    // int arr1[size1];
    // int arr2[size2];
    //
    // for (unsigned x = 0; x < size1; x++)
    //    cin >> arr1[x];
    // for (unsigned x = 0; x < size2; x++)
    //    cin >> arr2[x];
    //
    // if (size1 > size2) {
    //    cout << "min - 2" << endl;
    //    return 0;
    //}
    // if (size1 < size2) {
    //    cout << "min - 1" << endl;
    //    return 0;
    //}
    //
    // for (unsigned x = 0; x < size1; x++) {
    //    if (arr1[x] != arr2[x]) {
    //        (arr1[x] < arr2[x]) ? cout << "min - 1" << endl
    //                            : cout << "min - 2" << endl;
    //        return 0;
    //    }
    //}

    vector<int> v1(size1);
    vector<int> v2(size2);

    for (auto beg = v1.begin(); beg != v1.end(); beg++)
        cin >> *beg;
    for (auto beg = v2.begin(); beg != v2.end(); beg++)
        cin >> *beg;

    if (size1 > size2) {
        cout << "min - 2" << endl;
        return 0;
    }
    if (size1 < size2) {
        cout << "min - 1" << endl;
        return 0;
    }

    for (unsigned x = 0; x < size1; x++) {
        if (v1[x] != v2[x]) {
            (v1[x] < v2[x]) ? cout << "min - 1" << endl
                            : cout << "min - 2" << endl;
            return 0;
        }
    }

    cout << "same" << endl;

    return 0;
}