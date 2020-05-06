#include <iostream>

// consts are only available to the local file unless they are declared with extern
// to initialise
extern const int bufSize = 1024;

// files which use the const but dont initialise it declare it as
extern const int bufSize;

int main()
{

    // its not possible to declare external const inside a function
    // can't do this here
    //extern const int bufSize = 1024;

    // This is an invalid declaration of a const because const needs to be initialised.
    // const int buf;
    int count = 0;
    const int size = count;

    count++;
    // This is invalid as value of a const can't be changed.
    // size ++;

    // it's possible to bind a reference to const
    const int ci = 1024;
    const int &r1 = ci;
    // r1 = 42; // error r1 is a reference to a const
    // int &r2 = ci; // error it's not possible to make a non-const reference to a const object

    int i = 42;
    const int &r2 = i;      // we can bind a const int& to a plain int object
    const int &r3 = 42;     // ok: r2 is a reference to const
    const int &r4 = r2 * 2; // ok: r3 is a reference to const
    // int &r5 = r2 * 2; // error: r4 is a plain, non const reference

    // a pointer to const
    const double pi = 3.14;   // pi is const; its value may not be changed
                              // double *ptr = &pi;        // error: ptr is a plain pointer const double * cant be assigned to double *
    const double *cptr = &pi; // ok: cptr may point to a double that is const
                              // *cptr = 42;               // error: cannot assign to *cptr

    // is different to a const pointer
    // a const pointer can't be nil and must be initialised
    // once initialised, the address it holds may not be changed.

    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object

    // which of the following initialisation are legal
    // int i = -1, &r = 0; // 0 can't be a reference, references must refer to variables.
    int i2 = 9;
    int *const p2 = &i2;       // this is only valid if i2 has been declared
    const int i = -1, &r = 0;  // this is valid
    const int *const p3 = &i2; // this is valid
    const int *p1 = &i2;       // this is valid
    // const int &const r2; //this is not valid r2 is not intialised
    const int i2 = i, &r = i; // this is valid

    return 0;
}