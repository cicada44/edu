#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    string s;

    cout << "Input string: ";
    cin >> s;

    for (decltype(s.size()) x = 0; x < s.size(); ++x) {
        while (ispunct(s[x]))
            x++;
        cout << s[x];
    }

    cout << endl;

    return 0;
}