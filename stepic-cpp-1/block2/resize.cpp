#include <iostream>
using namespace std;

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char * new_str = new char[new_size];
    for(int i = 0; i < size && i < new_size; ++i)
        new_str[i] = str[i];
    delete[] str;
 
    return new_str;
}

int main()
{
    const char *s;
    char *s1 = resize(s, 10, 20);
    cout << s1 << endl;

    return 0;
}