#include <iostream>
#include "Sales_item.h"

/* 
To run using data 
./book <data/single_book >outfile
*/

int main()
{
    Sales_item book;
    // read ISBN, number of copies sold and sales price

    std::cin >> book;
    // write ISBN, number of copies sold and sales price
    std::cout << book << std::endl;
    return 0;
}