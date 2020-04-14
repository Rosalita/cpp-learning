#include <iostream>

int main()
{

    // its not possible to read into a variable declaration
    // the line below is invalid
    // std::cin >> int input_value;

    // the variable must be declared first
    // int input_value;
    // std::cin >> input_value;

    // the line below won't compile
    // error: narrowing conversion of '3.1400000000000001e+0' from 'double' to 'int' inside { } [-Wnarrowing]
    // int i = { 3.14 };

    // the line below is invalid
    // double salary = wage = 9999.99;
    double wage = 9999.99, salary = wage;

    std::cout << salary << std::endl;
    std::cout << wage << std::endl;

    // this line won't error
    int i = 3.14;
    // but i will be 3, not 3.14
    std::cout << i << std::endl;

   
}