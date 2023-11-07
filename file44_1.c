// Program to swap first and last digit of a number

#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit, c;

    printf("Enter Any Digits Number \t :");
    scanf("%d", &n);

    lastDigit = n % 10;
    firstDigit = n;

    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    c = firstDigit;
    firstDigit = lastDigit;
    lastDigit = c;
    printf("First Digit =%d\n", firstDigit);
    printf("Last Digit =%d\n", lastDigit);

    return 0;
}