#include <iostream>

/*
Sums numbers until end-of-file is entered
EOF on Linux is ctrl + d 
EOF on Windows is ctrl + z
*/

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}