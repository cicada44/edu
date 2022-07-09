#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    int val;
    unsigned size;

    cout << "input size: ";
    cin >> size;

    vector<int> ivec(size);

    for (auto beg = ivec.begin(); beg != ivec.end(); ++beg) {
        cin >> val;
        *beg = val;
    }

    for (auto beg = ivec.begin(); beg != ivec.end(); beg++) {
        int sum = *beg + *(beg + 1);
        cout << "sum - " << sum << endl;
    }

    return 0;
}