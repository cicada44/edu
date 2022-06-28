#include <iostream>
using namespace std;

void instertionSort(int (&a)[10])
{
    for (int k = 1; k < 10; k++)
    {
        int temp = a[k];
        int j = k - 1;
        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 10;
    int b = 20;
    int &l = a;
    swap(a, b);
    cout << a << " " << b << " " << l << endl;

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    instertionSort(arr);
    for (int x = 0; x < 10; x++)
        cout << arr[x] << " ";

    return 0;
}
