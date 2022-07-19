#include <iostream>
#include <string>

using namespace std;
using std::string;

int odd[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
int even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

int (&func(const int i))[10]
{
    return (i % 2) ? odd : even;
}

int main()
{
    return 0;
}