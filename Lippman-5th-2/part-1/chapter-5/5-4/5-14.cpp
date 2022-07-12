#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using namespace std;

int main()
{
    unsigned cnt_spaces = 0, cnt = 0, wr = 0;
    string s;

    getline(cin, s);

    for (char c : s)
        if (isspace(c))
            cnt_spaces++;

    vector<string> vec_words;
    vector<int> vec_cnts(cnt_spaces + 1, 1);

    istringstream ss(s);

    string word;
    while (ss >> word) {
        vec_words.push_back(word);
        for (unsigned x = 0; x < cnt; x++)
            if (word == vec_words[x])
                vec_cnts[x] += 1;
        cnt++;
    }

    int max = *max_element(vec_cnts.begin(), vec_cnts.end());
    for (int x = 0; x < vec_cnts.size(); x++) {
        if (vec_cnts[x] == max)
            wr = x;
    }

    cout << "Max - " << *max_element(vec_cnts.begin(), vec_cnts.end()) << "\t"
         << vec_words[wr] << endl;

    return 0;
}