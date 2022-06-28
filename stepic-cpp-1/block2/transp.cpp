#include <iostream>
using namespace std;

int **transpose(const int *const *m, unsigned rows, unsigned cols)
{
    int **mT = new int *[cols];
    mT[0] = new int[cols * rows]; //Сразу все строчки

    for (int x = 0; x < cols; x++)
    {
        for (int i = 0; i < rows; i++)
        {
            mT[x][i] = m[i][x];
        }
    }
    return mT;
}

int main()
{
    const int *const *m;
    int** mt = transpose(m);

    return 0;
}