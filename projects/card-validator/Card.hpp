#include <cctype>
#include <iostream>
#include <string>
#include <vector>

class Card {
    friend void to_vector(Card& card);

public:
    Card()
    {
    }
    Card(std::string& card_n)
        : card_number(card_n), vec_num_card(card_n.begin(), card_n.end())
    {
    }
    int pay_system()
    {
        if (*(this->vec_num_card.begin()) == mastercard)
            return 0;
        else if (*(this->vec_num_card.begin()) == visa)
            return 1;
        else if (
                (*(this->vec_num_card.begin()) == unionpay_one)
                && (*(this->vec_num_card.begin() + 1)) == unionpay_second)
            return 2;
        return -1;
    }
    void is_valid_luhn()
    {
        std::vector<unsigned> temp_vector = this->vec_num_card;
        unsigned sum = 0;
        for (unsigned x = 0; x < temp_vector.size(); x += 2) {
            temp_vector[x] *= 2;
            if (temp_vector[x] > 9)
                temp_vector[x] -= 9;
        }
        for (auto x = temp_vector.begin(); x != temp_vector.end(); x++) {
            // std::cout << *x << std::endl;
            sum += *x;
        }
        this->is_valid = 0;
        if (sum % 10 != 0)
            this->is_valid = 1;
    }
    bool is_valid;
    std::string card_number;

private:
    std::vector<unsigned> vec_num_card;
    static const unsigned mastercard;
    static const unsigned visa;
    static const unsigned unionpay_one;
    static const unsigned unionpay_second;
};

const unsigned Card::mastercard = 5;
const unsigned Card::visa = 4;
const unsigned Card::unionpay_one = 6;
const unsigned Card::unionpay_second = 2;

void read_card_num(std::istream&, Card&);
void print_card_num(std::ostream&, Card&);
void to_vector(Card&);
bool check_card(Card&);
void print_pay_system(Card&);
void print_validation(Card&);

void read_card_num(std::istream& is, Card& card_n)
{
    is >> card_n.card_number;
}

void print_card_num(std::ostream& os, Card& card_n)
{
    os << card_n.card_number << std::endl;
}

void to_vector(Card& card)
{
    for (auto c : card.card_number)
        card.vec_num_card.push_back(c - '0');
}

bool check_card(Card& card)
{
    if (card.card_number.size() != 16)
        return 1;
    for (auto c : card.card_number)
        if (!isdigit(c))
            return 1;
    return 0;
}

void print_pay_system(Card& card)
{
    int pay_sys = card.pay_system();
    if (pay_sys == 0)
        std::cout << "Mastercard" << std::endl;
    else if (pay_sys == 1)
        std::cout << "Visa" << std::endl;
    else if (pay_sys == 2)
        std::cout << "Unionpay" << std::endl;
    else
        std::cout << "This paying system is not in app :(" << std::endl;
}

void print_validation(Card& card)
{
    card.is_valid_luhn();
    if (card.is_valid)
        std::cout << "Card is not valid" << std::endl;
    else
        std::cout << "Card is valid" << std::endl;
}