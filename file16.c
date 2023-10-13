// Sizeof Operator
// The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:

// we use the %lu format specifer to print the result, instead of %d . It is because the compiler expects the sizeof operator to return a long unsigned

#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf(" The size of Integer    is \t: %lu\n", sizeof(myInt));
    printf(" The size of Float      is \t: %lu\n", sizeof(myFloat));
    printf(" The size of Double     is \t: %lu\n", sizeof(myDouble));
    printf(" The size of Charater   is \t: %lu\n", sizeof(myChar));

    return 0;
}