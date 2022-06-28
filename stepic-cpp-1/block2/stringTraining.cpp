#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = ", world!";
    // string s3 = "cicada3301";   | WRONG
    // string s3suff = "3301";     | WRONG 
    // string s4 = s3 - s3suff;    | WRONG
    string s = s1 + s2;

    cout << "s1 size - " << s1.size() << endl
         << "s - " << s << endl;

    return 0;
}