#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char* s;
    if (argc == 3) {
        s = strcat(argv[1], argv[2]);
        cout << "string - " << s << endl;
    }

    return 0;
}