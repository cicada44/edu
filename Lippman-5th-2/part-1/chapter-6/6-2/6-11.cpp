#include <iostream>

using namespace std;

void reset(int& n)
{
    n = 0;
}

int main()
{
    int num;

    cout << "input num: ";
    cin >> num;

    reset(num);

    cout << "reset num: " << num << endl;

    return 0;
}