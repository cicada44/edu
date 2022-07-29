#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::fstream fs;
    std::string filename;
    std::string tmp, tmp_for_iss;
    std::cout << "input name of file: ";
    std::cin >> filename;
    std::vector<std::string> vec;

    fs.open(filename, std::ios_base::in);

    std::istringstream iss;

    while (getline(fs, tmp)) {
        iss.clear();
        iss.str(tmp);
        while (iss >> tmp_for_iss) {
            vec.push_back(tmp_for_iss);
        }
    }

    for (auto x = vec.begin(); x != vec.end(); x++)
        std::cout << *x << std::endl;

    return 0;
}