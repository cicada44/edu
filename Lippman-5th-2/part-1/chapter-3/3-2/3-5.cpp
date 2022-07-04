#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string s1, s2;

    while (getline(cin, s2))
        s1 += s2 + " ";
    cout << "s: " << s1 << endl;

    return 0;
}