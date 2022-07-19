#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int f(int n1, int n2)
{
    return (n1 <= n2) ? n1 : n2;
}

int f_plus(int n1, int n2)
{
    return n1 + n2;
}

int f_del(int n1, int n2)
{
    return n1 / n2;
}

int f_minus(int n1, int n2)
{
    return n1 - n2;
}

int f_multiply(int n1, int n2)
{
    return n1 * n2;
}

int main()
{
    vector<decltype(f_del)*> vec_funcs;
    vec_funcs.push_back(f_minus);
    vec_funcs.push_back(f_plus);
    vec_funcs.push_back(f_del);
    vec_funcs.push_back(f_multiply);

    for (unsigned x = 0; x != 4; x++) {
        cout << vec_funcs[x](1, 1) << endl;
    }

    return 0;
}