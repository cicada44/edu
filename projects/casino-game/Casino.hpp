#include <cstdlib>
#include <iostream>

class Casino {
public:
    Casino() : sum(0)
    {
    }
    void read_sum(std::istream& is)
    {
        is >> sum;
    }
    void make_random_number()
    {
        rand_num = rand() % 10;
    }
    void read_num(std::istream& is)
    {
        is >> num;
    }
    bool check_cmp() const
    {
        if (rand_num == num)
            return 0;
        return 1;
    }
    void raise_sum()
    {
        sum *= 10;
    }
    float get_sum() const
    {
        return sum;
    }

private:
    float sum;
    unsigned rand_num;
    unsigned num;
};