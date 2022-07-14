#include <exception>
#include <iostream>
#include <string>

using namespace std;
using std::string;

int main()
{
    int n1, n2, result;

    cout << "input n1, n2: ";
    while (cin >> n1 >> n2) {
        try {
            if (!n2)
                throw runtime_error("Second num mustn't be 0");
            result = n1 / n2;
            break;
        } catch (runtime_error err) {
            cout << err.what() << "\ntry again?: ";
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}