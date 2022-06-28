#include <iostream>

void rotate_once_left(int *a, int size)
{
    int temp = *a;
    for (int x = 0; x < size; x++)
    {
        *(a + x) = *(a + x + 1);
    }
    *(a + size - 1) = temp;
}

void rotate_once_right(int *a, int size)
{
    int temp = *(a + size - 1);
    for (int x = size - 1; x >= 0; x--)
    {
        *(a + x) = *(a + x - 1);
    }
    *a = temp;
}

void rotate(int *a, int size, int shift)
{
    if (!shift)
        ;
    if (size == shift)
        ;
    if (shift > 0)
    {
        for (int x = 0; x < shift; x++)
            rotate_once_left(a, size);
    }
    if (shift < 0)
    {
        shift *= -1;
        for (int x = 0; x < shift; x++)
            rotate_once_right(a, size);
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    rotate(a, 5, 2);
    for (int x = 0; x < 5; x++)
        printf("%d ", a[x]);
    printf("\n");
    return 0;
}