#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string s1, s2;

    cout << "Input s1: ";
    getline(cin, s1);
    cout << "Input s2: ";
    getline(cin, s1);

    cout << s2 << endl;

    if (s1 == s2)
        cout << "EQUAL!" << endl;
    else
        (s1 < s2) ? cout << "Min - s1" << endl : cout << "Min - s2" << endl;

    if (s1.size() == s2.size())
        cout << "Size equal" << endl;
    else
        (s1.size() < s2.size()) ? cout << "Min - s1" << endl
                                : cout << "Min - s2" << endl;

    return 0;
}