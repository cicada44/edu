#include <iostream>
#include <string>

using namespace std;
using std::string;

bool is_upper_case(const string& s)
{
    for (auto x = s.begin(); x != s.end(); x++)
        if (isupper(*x))
            return 1;
    return 0;
}

void to_lower_case(string& s)
{
    for (auto x = s.begin(); x != s.end(); x++)
        if (isupper(*x))
            *x = tolower(*x);
}

int main()
{
    string s = "Hello";
    string s2 = "HELLO";

    bool flag = is_upper_case(s);
    to_lower_case(s);

    cout << "flag - " << flag << endl;
    cout << "string: " << s << endl;

    return 0;
}