#include <iostream>
#include <string>

using namespace std;
using std::string;

bool is_empty_new(const string& s)
{
    return s.empty();
}

int main()
{
    string s = "Hello";

    bool flag = is_empty_new(s);

    cout << "flag - " << flag << endl;

    return 0;
}