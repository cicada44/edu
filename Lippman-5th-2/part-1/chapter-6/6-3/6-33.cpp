#include <iostream>
#include <vector>

using namespace std;
using std::vector;

void vector_output(vector<int> vec, unsigned size = 0)
{
    if (size != vec.size()) {
        cout << vec[size] << " ";
        return vector_output(vec, ++size);
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    vector_output(vec, 0);

    return 0;
}