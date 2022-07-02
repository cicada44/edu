#include <cmath>
#include <iostream>

using namespace std;

void input_arr(double** arr, long size)
{
    for (long x = 0; x < size; x++) {
        cout << "Input " << x + 1 << ": ";
        cin >> *(*arr + x);
    }
}

double sum_pows(double* arr, int size)
{
    double s = 0;
    for (int x = 0; x < size; x++) {
        if (*(arr + x) > 2.5 || (*(arr + x)) * -1 > 2.5)
            s += pow(*(arr + x), 2);
    }
    return s;
}

int main()
{
    long size;

    cout << "Input size: ";
    cin >> size;

    double* arr = new double[size];

    input_arr(&arr, size);

    double sum = sum_pows(arr, size);

    cout << "\nSum - " << sum << endl;

    return 0;
}