#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    unsigned size;

    cout << "input size: ";
    cin >> size;

    vector<int> ivec(size);

    for (decltype(ivec.size()) x = 0; x < ivec.size(); x++)
        cin >> ivec[x];

    for (decltype(ivec.size()) x = 0; x < ivec.size() / 2; x++)
        cout << "sum - " << ivec[x] + ivec[ivec.size() - x - 1] << endl;

    return 0;
}