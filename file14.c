// Comparison Operators

// Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
// The return value of a comparison is either 1 or 0, which means true (1) or false (0).

#include <stdio.h>
int main()
{
    int x = 5;
    int y = 5;

    int a = 5;
    int b = 3;

    int c = 6;
    int d = 4;

    int e = 8;
    int f = 7;

    int g = 10;
    int h = 9;

    int i = 12;
    int j = 11;

    int k = 14;
    int l = 13;

    // a == b: This is a comparison using the equality operator ==. It checks if 'a' is equal to 'b'. In this case, it checks if the value of 'a' (5) is equal to the value of 'b' (3).

    //   If 'a' is equal to 'b', the result will be 1 (true); if they are not equal, the result will be 0 (false).
    printf("The Comparison between A is Equal to B is %d\n", a == b);

    // returns 1 (true) because 5 is not equal to 5
    printf(" The Comparision between X is Equal to Y is %d\n", x == y);

    // returns 1 (true) because 6 is not equal to 4
    printf(" The Comparision between C is Not Equal to D is %d\n", c != d);

    // returns 1 (true) because 8 is greater than 7
    printf(" The Comprision Between E  is Greater than F is %d\n", e > f);

    // returns 0 (false) because 10 is not less than 9
    printf(" The Comparision between G is less than H is %d\n", g < h);

    // Returns 1 (true) because 12 is greater than, or equal, to 11
    printf(" The Comparision between I is greater than or qual to J is %d\n", i >= j);

    // Returns 0 (false) because 14 is neither less than or equal to 13
    printf(" The Comparision between K is less than or equal to L is %d\n", k <= l);

    return 0;
}