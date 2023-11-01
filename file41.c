// C program to find first and last digit of any number

#include <stdio.h>
#include <math.h>
int main()
{
    int n, firstDigit, lastDigit, digits;
    printf(" Enter Any Number \t : ");
    scanf("%d", &n);

    lastDigit = n % 10;
    digits = (int)log10(n);

    firstDigit = (int)(n / pow(10, digits));

    printf(" First Digit = %d \n", firstDigit);
    printf("Last Digit   = %d \n", lastDigit);
    return 0;
}