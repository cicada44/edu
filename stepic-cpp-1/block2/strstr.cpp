#include <iostream>

int strlen(const char *s)
{
    int cnt = 0;
    while (*s++ != '\0')
        cnt++;
    return cnt;
}

int strstr(const char *text, const char *pattern)
{
    if (0 == strlen(pattern))
        return 0;
    int len = strlen(pattern);
    int i = 0, j = 0;
    for (int x = 0; *(text + x) != '\0'; x++)
    {
        j = x;
        i = 0;
        while ((*(text + j) == *(pattern + i)) != '\0')
        {
            if (len - 1 == i)
                return x;
            i++;
            j++;
        }
    }
    return -1;
}

int main()
{
    const char *text = "h";
    const char *f = "";
    int s = strstr(text, f);
    std::cout << s << std::endl;

    return 0;
}