#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    string s;
    unsigned size;

    cout << "size: ";
    cin >> size;

    vector<string> vstr(size);

    while (cin >> s) {
        for (auto& c : s)
            c = toupper(c);
        vstr.push_back(s);
    }

    decltype(vstr.size()) i = 0;

    for (decltype(vstr.size()) x = 0; x < vstr.size(); x++)
        cout << vstr[x] << " ";

    cout << endl;

    return 0;
}