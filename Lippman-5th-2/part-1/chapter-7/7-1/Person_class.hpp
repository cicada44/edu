#include <iostream>
#include <string>

class Person {
public:
    Person() = default;
    Person(const std::string s, const std::string adr) : name(s), adress(adr)
    {
    }
    Person(const std::string s) : name(s)
    {
    }
    std::string name_of_person() const
    {
        return name;
    }
    std::string adress_of_person() const
    {
        return adress;
    }
    std::string name;
    std::string adress;
};

std::istream& read(std::istream& is, Person& item);
std::ostream& print(std::ostream& os, const Person& item);

std::istream& read(std::istream& is, Person& item)
{
    is >> item.name >> item.adress;
    return is;
}

std::ostream& print(std::ostream& os, const Person& item)
{
    os << item.name_of_person() << " " << item.adress_of_person() << " "
       << std::endl;
    return os;
}