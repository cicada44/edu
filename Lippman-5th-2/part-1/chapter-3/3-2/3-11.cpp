#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    const string s = "Keep out!";

    for (auto& c : s) { // unsafe initialized
    }

    return 0;
}