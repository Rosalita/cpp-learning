#include <iostream>

int main()
{
    // Pointers and references

    int age = 40;
    int height = 174;

    // declare some pointers
    // spaces are ignored around the * 
    int *a = &age;
    int * b = &age;
    int* c = &age;

    std::cout << *a <<std::endl; // 40
    // write code to change the value of a pointer
    *a = 30;
    std::cout << *a <<std::endl; // 30

    // write code to change the value to which the pointer points
    a = &height;
    std::cout << *a <<std::endl; // 174

    // explain the differences between pointers and references
    // references are declared using &
    // pointers are declared using *
    // a reference is just an address of a variable
    // a pointer refers to another variable
    // a reference can't be reassigned
    // a pointer can be reassigned
    // a reference shares the same address as the variable 
    // a pointer has its own memory address and stores it on the stack
    // references can't be null
    // pointers can be null


    // what does the following program do?

    // int i = 42;
    // int *p1 = &i;
    // *p1 = p1 *p1;
    
    // it fails to compile
    //  error: invalid operands of types ‘int*’ and ‘int*’ to binary ‘operator*’

    // Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
    int i = 0; // legal
    // double* dp = &i; // illegal can't put the address of an int in a double pointer
    // int *ip = i; // illegal can't put an int into an int pointer, only the address of an int will go
    int *p = &i; // legal

    // Assuming p is a pointer to int , explain the following code:
    //if (p) // ... if the pointer is not a null pointer
    // if (*p) // ... if the value at the address of the pointer is not null

    // Given a pointer p , can you determine whether p points to a valid object? If so, how? If not, why not?
    // not possible, it could be pointing at something that points at something that was deleted

    // Why is the initialization of p legal but that of lp illegal?
    // int i = 42; void p = &i; long lp = &i;

    // because a void* can hold any type of pointer and you can't store the address of an int in a long pointer
}