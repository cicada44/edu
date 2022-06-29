#include <iostream>

using namespace std;

void print_pyro(unsigned cnt)
{
    unsigned i = 0;
    for (unsigned x = 0; x < cnt; x++) {
        i = 0;
        while (i <= x) {
            cout << "+";
            i++;
        }
        cout << endl;
    }
}

int main()
{
    unsigned cnt;
    cout << "Input cnt: ";
    cin >> cnt;
    print_pyro(cnt);

    return 0;
}