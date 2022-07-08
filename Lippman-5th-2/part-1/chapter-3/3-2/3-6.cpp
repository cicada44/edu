#include <iostream>

using namespace std;

int main()
{
    string s;

    cout << "input s: ";
    cin >> s;

    for (auto& c : s)
        c = 'X';

    cout << "output: " << s << endl;

    return 0;
}