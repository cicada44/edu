#include <iostream>

using namespace std;

std::string global_str; // 0

int main()
{
    int local_int;         // random
    std::string local_str; // uninitialized

    cout << global_str << local_int << local_str << endl;

    return 0;
}