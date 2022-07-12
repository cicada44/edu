#include <iostream>
#include <string>

using namespace std;
using std::string;

int main()
{
    string s1, s2;

    do {
        getline(cin, s1);
        getline(cin, s2);
        if (s1 == s2) {
            cout << "sim" << endl;
            continue;
        }
        (s1 > s2) ? cout << "s2" << endl : cout << "s1" << endl;
    } while (1);

    return 0;
}