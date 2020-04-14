#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    // the initial values are...
    std::cout << local_int << std::endl;  //21945
    std::cout << local_str << std::endl;  // "" - empty string
    std::cout << global_int << std::endl; // 0
    std::cout << global_str << std::endl; // "" - empty string

    // int double = 3.14; //invalid identifier, reserved word double
    int _;                // valid identifier
    //  int catch-22; //invalid identifier, reserved word catch
    //  int 1_or_2 = 1; //invalid identifier, can't start with a number
    double Double = 3.14; // valid identifier, but should only use uppercase for class names
}