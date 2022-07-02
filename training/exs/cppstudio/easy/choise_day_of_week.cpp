#include <iostream>
#include <string>

using namespace std;

void choise(string& s)
{
    int n;
    cout << "Input n: ";
    cin >> n;
    switch (n) {
    case 1:
        s = "Monday";
        break;
    case 2:
        s = "Tuesday";
        break;
    case 3:
        s = "Wednesday";
        break;
    case 4:
        s = "Thursday";
        break;
    case 5:
        s = "Friday";
        break;
    case 6:
        s = "Saturday";
        break;
    case 7:
        s = "Sunday";
        break;
    default:
        break;
    }
}

int main()
{
    string s;

    choise(s);

    cout << "Day - " << s << endl;

    return 0;
}