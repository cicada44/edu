#include <iostream>

using namespace std;

void print_ptr(const int* b, const int* e)
{
    while (b != e)
        cout << *b++ << " ";
    cout << endl;
}

void print_classic(const int arr[], const unsigned size)
{
    for (unsigned x = 0; x < size; x++)
        cout << arr[x] << " ";
    cout << endl;
}

void print_link(int (&arr)[5])
{
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int n[] = {0, 1};
    int i = 0;

    print_ptr(begin(n), end(n));
    print_classic(n, 5);
    print_link(n);
    // print_ptr(begin(i), end(i));
    //  print_classic(i, 5);
    //  print_link(i);

    return 0;
}