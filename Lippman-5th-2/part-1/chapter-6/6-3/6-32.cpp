#include <iostream>

using namespace std;

int& get(int* arry, int index)
{
    return arry[index];
}

int main()
{
    int ai[10];
    for (int i = 0; i != 10; i++)
        get(ai, i) = i;

    for (int x = 0; x != 10; x++)
        cout << ai[x] << " ";
    cout << endl;

    return 0;
}