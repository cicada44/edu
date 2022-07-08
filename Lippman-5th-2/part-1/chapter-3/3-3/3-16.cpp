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
    vector<string> v6{10};       // 10
    vector<string> v7{10, "hi"}; // 10

    cout << "v1\nsize - " << v1.size() << endl;
    cout << "v2\nsize - " << v2.size() << endl;
    for (decltype(v2.size()) x = 0; x < v2.size(); x++)
        cout << v2[x] << " ";
    cout << endl;
    cout << "v3\nsize - " << v3.size() << endl;
    for (decltype(v3.size()) x = 0; x < v3.size(); x++)
        cout << v3[x] << " ";
    cout << endl;
    cout << "v4\nsize - " << v4.size() << endl;
    for (decltype(v4.size()) x = 0; x < v4.size(); x++)
        cout << v4[x] << " ";
    cout << endl;
    cout << "v5\nsize - " << v5.size() << endl;
    for (decltype(v5.size()) x = 0; x < v5.size(); x++)
        cout << v5[x] << " ";
    cout << endl;
    cout << "v6\nsize - " << v6.size() << endl;
    for (decltype(v6.size()) x = 0; x < v6.size(); x++)
        cout << v6[x] << " ";
    cout << endl;
    cout << "v7\nsize - " << v7.size() << endl;
    for (decltype(v7.size()) x = 0; x < v7.size(); x++)
        cout << v7[x] << " ";
    cout << endl;

    return 0;
}