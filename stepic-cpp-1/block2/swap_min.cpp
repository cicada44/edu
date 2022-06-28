#include <iostream>
using namespace std;

void swap_min(int **m, unsigned rows, unsigned cols)
{
    int min = **m;
    int min_r = 0;
    for (unsigned x = 0; x < rows; x++)
    {
        for (unsigned i = 0; i < cols; i++)
        {
            if (*(*(m + x) + i) < min)
            {
                min = *(*(m + x) + i);
                min_r = x;
            }
        }
    }
    swap(m[min_r], m[0]);
}

int main()
{
    int **m = new int *[3];
    for (int x = 0; x < 3; x++)
        m[x] = new int[3];

    for (int x = 0; x < 3; x++)
        for (int i = 0; i < 3; i++)
            cin >> m[x][i];

    swap_min(m, 3, 3);

    for (int x = 0; x < 3; x++)
    {
        for (int i = 0; i < 3; i++)
            cout << m[x][i] << " ";
        cout << endl;
    }

    return 0;
}