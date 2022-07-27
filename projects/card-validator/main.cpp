#include "Card.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
    bool flag_right_nums;
    Card card;

    read_card_num(cin, card);
    // out_card_num(cout, card);

    flag_right_nums = check_card(card);
    if (flag_right_nums) {
        cout << "Problems with count of card numbers" << endl;
        exit(-1);
    }
    to_vector(card);

    print_pay_system(card);

    print_validation(card);

    return 0;
}