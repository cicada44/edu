#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void read_file(
        const std::string& name_file,
        std::vector<std::string>& vec,
        const char& c)
{
    std::string tmp;
    std::ifstream file;
    file.open(name_file);
    if (!file.is_open()) {
        std::cerr << "Non-correct filename" << std::endl;
        exit(1);
    }
    while (!file.eof()) {
        std::getline(file, tmp, c);
        vec.push_back(tmp);
    }
}

void print_vector(std::ostream& os, std::vector<std::string>& vec)
{
    for (auto x = vec.begin(); x != vec.end(); x++) {
        os << *x;
        os << std::endl;
    }
    os << std::endl;
}

int main()
{
    char delim;
    std::string name_file;
    std::cout << "input filename: ";
    std::cin >> name_file;
    std::cout << "input delim: ";
    std::cin >> delim;
    std::vector<std::string> vec_str;

    read_file(name_file, vec_str, delim);

    print_vector(std::cout, vec_str);

    return 0;
}