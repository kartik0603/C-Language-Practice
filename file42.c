// Program to find first digit of a number

#include <stdio.h>
int main()
{
    int n, firstDigit;

    printf(" Enter Any Number \t : ");
    scanf("%d", &n);

    firstDigit = n;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    printf("First Digit = %d", firstDigit);
    return 0;
}