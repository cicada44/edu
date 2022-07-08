#include <iostream>

using namespace std;

int main()
{
    string s;

    cout << "input s: ";
    cin >> s;

    // for (decltype(s.size()) x = 0; x < s.size(); ++x)

    decltype(s.size()) x = 0;
    while (x < s.size()) {
        s[x] = 'X';
        x++;
    }

    cout << "output: " << s << endl;

    return 0;
}