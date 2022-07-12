#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    int val;
    vector<int> v1;
    vector<int> v2;

    bool r;

    cout << "input values for v1:" << endl;
    while (cin >> val) {
        if (val == -1)
            break;
        v1.push_back(val);
    }
    cout << "input values for v2:" << endl;
    while (cin >> val) {
        if (val == -1)
            break;
        v2.push_back(val);
    }

    if (v1.size() == 0 || v2.size() == 0) {
        cout << "something wrong!" << endl;
        return 0;
    }

    r = true;
    for (auto x = v1.begin(), i = v2.begin(); x != v1.end(), i != v2.end();
         x++, i++)
        if (*x != *i)
            r = false;

    (r == 1) ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}