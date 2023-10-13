// Logical Operators

// test for true or false values with logical operators.
//  Logical operators are used to determine the logic between variables or values:

#include <stdio.h>
int main()
{
    int x = 5;
    int y = 3;

    int a = 6;
    int b = 4;

    int c = 8;
    int d = 7;

    // Logical AND	Returns 1 (true) if both statements are true
    printf(" The Logial And Operation Between X && Y is %d\n", x > 3 && y < 10);

    // Returns 1 (true) because one of the conditions are true (6 is greater than 4, but 6 is not less than 4)
    printf(" The Logical OR Operation Between A || B is %d\n", a > 3 || b < 4);

    // Returns TRUE (1) because ! (not) is used to reverse the result
    printf("The logical Not Operation Between C ! D is %d\n", !(c > 9 && d < 6));

    return 0;
}