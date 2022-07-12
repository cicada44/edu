#include <cctype>
#include <iostream>
#include <string>

using namespace std;
using std::string;

int main()
{
    string str;
    unsigned cnt_alpha, cnt_tabs, cnt_spaces, cnt_ns;

    cnt_alpha = cnt_tabs = cnt_spaces = cnt_ns = 0;

    getline(cin, str);

    for (char c : str) {
        if (isalpha(c) && (islower(c) || isupper(c)))
            cnt_alpha++;
        if (isspace(c))
            cnt_spaces++;
        if (c == '\t')
            cnt_tabs++;
        if (c == '\n')
            cnt_ns++;
    }

    cout << "Alphas: " << cnt_alpha << endl
         << "tabs: " << cnt_tabs << endl
         << "spaces: " << cnt_spaces << endl
         << "cnt newlines: " << cnt_ns << endl;

    return 0;
}