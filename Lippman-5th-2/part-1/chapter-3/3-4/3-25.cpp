#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    vector<int> v(10);
    vector<int> mark(10);

    unsigned x = 0;
    for (auto beg = v.begin(); beg != v.end(); beg++) {
        cin >> v[x];
        x++;
    }

    int i = 0;
    for (auto beg = v.begin(); beg != v.end(); beg++)
        ++mark[*beg / 10];

    for (auto beg = mark.begin(); beg != mark.end(); beg++)
        cout << *beg << " ";

    cout << endl;

    return 0;
}