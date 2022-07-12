#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    string s;
    vector<string> vec;

    while (cin >> s) {
        for (auto x = vec.begin(); x != vec.end(); x++) {
            if (*x == s) {
                cout << "word: " << s << endl;
                return 0;
            }
        }
        vec.push_back(s);
    }

    cout << "sames words is now found" << endl;

    return 0;
}