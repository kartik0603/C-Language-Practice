// Assignment Operators
#include <stdio.h>

int main()
{

    int a = 10;
    int b = 10;

    a += 5;

    int x = 5;
    x -= 3;

    int y = 5;
    y *= 3;

    int z = 8;
    z /= 2;

    int r = 5;
    r %= 3;

    int s = 5;
    s &= 3;

    int t = 5;
    t |= 3;

    int q = 5;
    q ^= 3;

    int g = 5;
    g >>= 3;

    int h = 5;
    h <<= 3;

    //    the assignment operator (=) to assign the value 10 to a variable called x:
    printf("The value of b is \t %d\n", b);

    // The addition assignment operator (+=) adds a value to a variable:
    printf("The value of a is \t %d\n", a);

    // 	x -= 3 is called	x = x - 3
    printf(" The value of x is\t %d\n", x);

    // // 	y *= 3 is called	y= y* 5
    printf("The value of y is \t  %d\n", y);

    //  z/=2 is called z=z/2
    printf("The value of z is \t %d\n", z);

    // r%=3 is called r=r%3
    printf(" The value of r is \t %d\n", r);

    // int s = 5;: Declares an integer variable 'x' and initializes it with the value 5. In binary, 5 is 101.

    // s &= 3;: This is a bitwise AND assignment operator. It combines the current value of 's' with the value 3 using a bitwise AND operation and stores the result back in 's'.

    // In binary, 3 is 011.
    // Performing a bitwise AND operation between 101 (5) and 011 (3) results in 001 (1).
    // So, 's' is updated to 1.
    // printf("%d", s);: Prints the updated value of 's', which is 1.

    printf(" The value of s is \t %d\n", s);

    //     int t = 5;: Declares an integer variable 't' and initializes it with the value 5. In binary, 5 is 101.

    // t |= 3;: This is a bitwise OR assignment operator. It combines the current value of 't' with the value 3 using a bitwise OR operation and stores the result back in 't'.

    // In binary, 3 is 011.
    // Performing a bitwise OR operation between 101 (5) and 011 (3) results in 111 (7).
    // So, 't' is updated to 7.
    // printf("%d", t);: Prints the updated value of 't', which is 7.
    printf(" The value of t is \t %d\n", t);

    //     int q = 5;: Declares an integer variable 'q' and initializes it with the value 5. In binary, 5 is 101.

    // q ^= 3;: This is a bitwise XOR assignment operator. It combines the current value of 'q' with the value 3 using a bitwise XOR operation and stores the result back in 'q'.

    // In binary, 3 is 011.
    // Performing a bitwise XOR operation between 101 (5) and 011 (3) results in 110 (6).
    // So, 'q' is updated to 6.
    // printf("%d", q);: Prints the updated value of 'q', which is 6
    printf(" The value of q is \t %d\n", q);

    //     int g = 5;: Declares an integer variable 'g' and initializes it with the value 5. In binary, 5 is 101.

    // g >>= 3;: This is a right shift assignment operator. It shifts the bits of the current value of 'g' to the right by 3 positions and stores the result back in 'g'.

    // In binary, the number 5 is 101. Shifting it right by 3 positions results in 000.
    // So, 'g' is updated to 0.
    // printf("%d", g);: Prints the updated value of 'g', which is 0.
    printf(" The value of g is \t %d\n", g);

    //     int h = 5;: Declares an integer variable 'h' and initializes it with the value 5. In binary, 5 is 101.

    // h <<= 3;: This is a left shift assignment operator. It shifts the bits of the current value of 'h' to the left by 3 positions and stores the result back in 'h'.

    // In binary, the number 5 is 101. Shifting it left by 3 positions results in 101000.
    // So, 'h' is updated to 40.
    // printf("%d", h);: Prints the updated value of 'h', which is 40
    printf(" The value of h is \t %d\n", h);

    return 0;
}