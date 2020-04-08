#include <iostream>
int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << std::endl; // 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32
    std::cout << i - u << std::endl;  // 0
    std::cout << u - i << std::endl;  // 0

    unsigned q = 1, q2 = 3;
    std::cout << q - q2 << std::endl; // 4294967294

    int w = -3;
    unsigned w2 = 2, w3 = 3;
    std::cout << w + w2 << std::endl; // 4294967295
    std::cout << w + w3 << std::endl; // 0

    std::cout << "Hi \x4dU\115!\n"; // prints Hi MUM!

    int month1 = 9, day1 = 7;
    //  int month2 = 09, day2 = 07;
    // above line will cause a compile error as 09 is not valid octal


    return 0;
}
