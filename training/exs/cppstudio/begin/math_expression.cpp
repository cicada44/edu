#include <iostream>
using namespace std;

void expr(int a, int b, int f, double& res)
{
    res = (a + b - f / a) + f * a * a - (a + b);
}

int main()
{
    double ans = 0;
    int a, b, f;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input f: ";
    cin >> f;
    expr(a, b, f, ans);
    cout << "Ans - " << ans << endl;

    return 0;
}