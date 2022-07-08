#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    int n;
    unsigned size;

    cout << "input size: ";
    cin >> size;

    vector<int> v(size);

    unsigned x = 1;

    while (cin >> n) {
        if (x == size)
            break;
        v.push_back(n);
        x++;
    }

    return 0;
}