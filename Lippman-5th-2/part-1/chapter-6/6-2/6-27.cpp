#include <initializer_list>
#include <iostream>

using namespace std;
using std::initializer_list;

int sum_of_elems(initializer_list<int>& list)
{
    int sum = 0;
    for (const auto element : list)
        sum += element;
    return sum;
}

int main()
{
    initializer_list<int> list_ints({1, 2, 3, 4, 5});

    int sum = sum_of_elems(list_ints);

    cout << "sum of elements: " << sum << endl;

    return 0;
}