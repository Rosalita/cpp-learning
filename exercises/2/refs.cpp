#include <iostream>

int main()
{

    // references can be lvalue or rvalue
    // historically lvalues could appear on the left side of an assignment expression
    // historically rvalues coule appear on the right side of an assignment expression
    // an lvalue points to a specific memory location
    // an rvalue is something that doesn't point anywhere
    // references are not objects in their own right

    int ival = 1.01;
    // int &rval1 = 1.01; //error initial value of reference to non-const must be lvalue
    int &rval2 = ival; // this is fine
    // int &rval3 = &rval2; // this is an error, cant assign a reference to a reference
    double dval = 3.14;
    // int &refVal5 = dval; // error: initializer must be an int object

    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
    // 10 10 
    // changing the reference to i also changes i
}