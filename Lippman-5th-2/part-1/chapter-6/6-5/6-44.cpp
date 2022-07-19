#include <iostream>
#include <string>

using namespace std;
using std::string;

inline string is_shroter(string& str1, string& str2)
{
    return (str1 <= str2) ? str1 : str2;
}

int main()
{
    string str1 = "qwe";
    string str2 = "rty";

    is_shroter(str1, str2);

    return 0;
}