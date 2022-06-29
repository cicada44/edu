#include <iostream>
#include <string>

using namespace std;

void print(string ghroup, string name, string surname, string otch)
{
    unsigned i = ghroup.size();
    if (i > 7) {
        cout << "LIE!" << endl;
        exit(1);
    }
    cout << "********************************" << endl
         << "* Лабораторная работа № 1      *" << endl
         << "* Выполнил(а): ст. гр. " << ghroup << endl
         << "* " << name << " " << surname << " " << otch << "       *\n"
         << "********************************" << endl;
}

void scan(string ghroup, string name, string surname, string otch)
{
    cout << "Ghroup: ";
    cin >> ghroup;
    cout << "Name: ";
    cin >> name;
    cout << "Surname: ";
    cin >> surname;
    cout << "Otch: ";
    cin >> otch;
    print(ghroup, name, surname, otch);
}

int main()
{
    string name, surname, otch, ghroup;
    scan(name, surname, otch, ghroup);
    return 0;
}