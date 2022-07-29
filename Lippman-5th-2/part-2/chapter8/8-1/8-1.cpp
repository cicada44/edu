#include <iostream>

std::istream& read_is(std::istream& is, std::ostream& os)
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
    return is;
}

int main()
{
    read_is(std::cin, std::cout);

    return 0;
}