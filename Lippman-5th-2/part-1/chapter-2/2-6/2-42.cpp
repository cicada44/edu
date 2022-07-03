#include "2-42.hpp"
#include <iostream>
#include <string>

int main()
{
    //    Sales_data book1, book2;
    //    unsigned sum;
    //
    //
    // std::cin >> book1.bookNo >> book1.revale;
    // std::cin >> book2.bookNo >> book2.revale;
    //
    // std::cout << "no1 - " << book1.bookNo << "\trevale - " << book1.revale
    //          << std::endl;
    // std::cout << "no2 - " << book2.bookNo << "\trevale - " << book2.revale
    //          << std::endl;
    //
    // if (book1.bookNo != book2.bookNo)
    //    std::cout << "Numbers of books must be same" << std::endl;
    // else {
    //    sum = book1.revale + book2.revale;
    //    std::cout << "sum of books - " << sum << std::endl;
    //}
    //

    unsigned size;
    unsigned sum = 0;

    std::cout << "Size: ";
    std::cin >> size;

    Sales_data* arr_books = new Sales_data[size];

    for (unsigned x = 0; x < size; x++) {
        std::cin >> arr_books[x].bookNo;
        std::cin >> arr_books[x].revale;
    }

    std::cout << std::endl;

    for (unsigned x = 0; x < size; x++) {
        std::cout << "Books №" << x + 1 << " data" << std::endl;
        std::cout << "No - " << arr_books[x].bookNo << std::endl;
        std::cout << "Revale - " << arr_books[x].revale << std::endl;
        std::cout << std::endl;
    }

    for (unsigned x = 0; x < size; x++)
        sum += arr_books[x].revale;

    std::cout << "\nSum of all: " << sum << std::endl;

    for (unsigned x = 0; x < size; x++) {
        for (unsigned i = 1; i < size; i++) {
            if (x == i)
                continue;
            if (arr_books[x].bookNo == arr_books[i].bookNo) {
                arr_books[x].trans++;
                arr_books[i].trans++;
            }
        }
        std::cout << "no - " << arr_books[x].bookNo
                  << ", transactions: " << arr_books[x].trans << std::endl;
    }

    return 0;
}