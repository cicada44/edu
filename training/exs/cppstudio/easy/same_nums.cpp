#include <iostream>

using namespace std;

unsigned radix(int n)
{
    unsigned cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    --cnt;
    return cnt;
}

void dels_on_nums(int n, int** arr)
{
    unsigned i = 0;
    while (n > 0) {
        *(*arr + i) = n % 10;
        n /= 10;
        i++;
    }
}

unsigned sames(int* arr, unsigned size)
{
    int tmp;
    for (unsigned x = 0; x < size; x++) {
        tmp = *(arr + x);
        for (unsigned j = 1; j < size; j++) {
            if (j == x)
                continue;
            if (tmp == *(arr + j))
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    cout << "Input num: ";
    cin >> n;

    unsigned rads = radix(n);

    int* arr = new int[rads];

    dels_on_nums(n, &arr);

    unsigned flag = sames(arr, rads);

    (flag) ? cout << "No" << endl : cout << "Yes" << endl;

    return 0;
}