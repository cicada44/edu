#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    vector<vector<int>> ivec;
    vector<string> cvec = ivec; // nonscalar
    vector<string> svec(10, "null");

    return 0;
}