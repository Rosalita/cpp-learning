#include <iostream>

// a pointer holds the address of another object

int main()
{
    // int ival = 42;
    // int *p = &ival; // p holds the address of ival; p is a pointer to ival

    // its not possible to define a pointer to a reference because references are not objects

    // generally the type of the pointer and the type of the object it points to must match
    // this however isn't always the case and there are two exceptions to this
    // double dval;
    // double *pd = &dval; // ok: initializer is the address of a double
    // double *pd2 = pd;   // ok: initializer is a pointer to double
    // int *pi = pd;       // error: types of pi and pd differ
    // pi = &dval;         // error: assigning the address of a double to a pointer to int

    int ival = 42;
    int *p = &ival;               // p holds the address of ival; p is a pointer to ival
    std::cout << *p << std::endl; // * yields the object to which p points; prints 42

    // a null pointer does not point to any object. Code can check if a pointer is null before using it
    // there are several ways to obtain a null pointer

    int *p1 = nullptr; // equivalent to int *p1 = 0;
    // nullptr is a special type that can be converted to any other pointer type
    int *p2 = 0;       // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL; // equivalent to int *p3 = 0;

    // modern c++ programs should avoid using NULL and use nullptr instead

    // void* is a special pointer that can hold the address of any value of any data pointer type
    double obj = 3.14, *pd = &obj; //pd is a pointer to a double
    // void* can hold the address value of any data pointer type
    void *pv = &obj; // obj can be any type like double
    int foo = 7;
    pv = &foo; // pv can hold a pointer to any type, its now pointing to an int

    // void* pointers can be compared to another pointer 
    // void* pointers can be passed or returned from a function 
    // void* pointers can be assigned to another function
    // Generally void* is used to deal with memory as memory rather than accessing the value stored at that address
    
    

}