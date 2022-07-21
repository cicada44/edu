#include <iostream>

using namespace std;

int main()
{
    int digit, num, temp, temp_num;
    unsigned counter = 0;

    cout << "input num: ";
    cin >> num;

    cout << "input digit to found: ";
    cin >> digit;

    temp_num = num;

    while (temp_num != 0) {
        temp_num /= 10;
        counter++;
    }

    while (num != 0) {
        temp = num % 10;
        if (temp == digit) {
            cout << "conter: " << counter << endl;
            return 0;
        }
        num /= 10;
        counter--;
    }

    cout << "there isnt digit in number" << endl;

    return 0;
}