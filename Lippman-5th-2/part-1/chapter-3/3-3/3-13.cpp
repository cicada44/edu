#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;              // unknown
    vector<int> v2(10);          // 10
    vector<int> v3(10, 42);      // 10
    vector<int> v4{10};          // 1
    vector<int> v5{10, 42};      // 2
    vector<string> v6{10};       // 1
    vector<string> v7{10, "hi"}; // 10

    return 0;
}