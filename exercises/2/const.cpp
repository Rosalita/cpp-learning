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

    return 0;
}