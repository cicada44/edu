#include <iostream>

using namespace std;

char* strcncat(char* s1, char* s2, char* buf)
{
    int x;
    for (x = 0; *(s1 + x) != '\0'; x++)
        *(buf + x) = *(s1 + x);
    for (int i = 0; *(s2 + i) != '\0'; i++) {
        *(buf + x) = *(s2 + i);
        x++;
    }
    buf[strlen(buf)] = '\0';
    return buf;
}

int main()
{
    return 0;
}