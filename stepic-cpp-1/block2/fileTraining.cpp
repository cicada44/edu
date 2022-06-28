#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    ifstream input("test.txt");
    input >> name;
    cout << name << endl;

    // ofstream output("test.txt");
    // output << "HI everyone" << endl;

    return 0;
}