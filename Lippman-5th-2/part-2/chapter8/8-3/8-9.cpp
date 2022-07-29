#include <iostream>
#include <sstream>
#include <string>

void read_is(std::istringstream& is, std::ostream& os)
{
    int to_read;
    while (is >> to_read)
        os << to_read;
    os << is.eof();
    os << is.fail();
    os << is.rdstate();
    is.clear();
    os << is.eof();
    os << is.fail();
    os << is.rdstate();
}

int main()
{
    // std::string s;
    // std::cin >> s;
    std::istringstream is;
    read_is(is, std::cout);

    return 0;
}