#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned revale;
    unsigned trans = 0;
};

#endif