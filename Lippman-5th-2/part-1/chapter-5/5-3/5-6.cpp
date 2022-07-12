#include <iostream>

using namespace std;

int main()
{
    int mark;

    cout << "input mark: ";
    cin >> mark;

    if (mark < 5)
        cout << "-" << endl;
    else if (mark < 7)
        cout << "+" << endl;
    else
        cout << "++" << endl;

    return 0;
}