#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    unsigned size;
    int f;

    cout << "input size: ";
    cin >> size;
    cout << "input f: ";
    cin >> f;

    vector<int> v(size);

    auto b = v.begin(), e = v.end();

    for (; b != e; b++) {
        int l;
        cin >> l;
        v.push_back(l);
    }

    auto beg = v.begin(), end = v.end();
    auto mid = v.begin() + (end - beg) / 2;

    while (mid != end && end != beg) {
        if (*mid == f)
            break;
        if (f > *mid)
            beg = mid + 1;
        else
            end = mid;
        mid = beg + (end - beg) / 2;
    }

    cout << "find pos - " << *mid << endl;

    return 0;
}