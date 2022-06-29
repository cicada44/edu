#include <iostream>
using namespace std;

unsigned count_of_radix(int n)
{
    if (n < 0)
        n *= -1;
    unsigned cnt = 0;
    while (n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

void div_on_radix(int n, int cnt, int* arr)
{
    int tmp;
    for (int x = cnt; x > 0; x--) {
        tmp = n % 10;
        n /= 10;
        *(arr + x - 1) = tmp;
    }
}

int main()
{
    int n;
    unsigned cnt_rad;
    cout << "Input number: ";
    cin >> n;
    cnt_rad = count_of_radix(n);
    int* arr_rad = new int[cnt_rad];
    div_on_radix(n, cnt_rad, arr_rad);
    for (unsigned x = 0; x < cnt_rad; x++)
        cout << x << " - " << arr_rad[x] << endl;

    return 0;
}