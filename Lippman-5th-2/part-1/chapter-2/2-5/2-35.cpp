#include <iostream>

using namespace std;

int main()
{
    const int i = 42;
    auto j = i;
    const auto& k = i;
    auto* p = &i;
    const auto j2 = i, &k2 = i;

    cout << "i - " << i << "\nj - " << j << "\nk - " << k << "\np - " << *p
         << "\nj2 - " << j2 << "\nk2 - " << k2 << endl;

    return 0;
}