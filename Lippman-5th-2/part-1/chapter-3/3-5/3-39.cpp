#include <iostream>

using namespace std;

int strcmp_r(char* s1, char* s2)
{
    int cmp;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        if (len1 < len2)
            cmp = -1;
        else
            cmp = 1;
        return cmp;
    }
    int x = 0, i = 0;
    while ((*(s1 + x) && *(s2 + i)) != '\0') {
        if (*(s1 + x) < *(s2 + i))
            return -1;
        else if (*(s1 + x) > *(s2 + i))
            return 1;
        x++;
        i++;
    }
    return 0;
}

int main()
{
    return 0;
}