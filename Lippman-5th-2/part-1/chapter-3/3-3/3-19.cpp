#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec1(10, 42); // pref
    vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3;
    for (decltype(ivec3.size()) x = 0; x < 10; x++)
        ivec3.push_back(42);

    return 0;
}