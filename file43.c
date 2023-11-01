// Program to find last digit of a number

#include <stdio.h>
int main()
{
    int n, lastDigit;
    printf("Enter Any Number \t : ");
    scanf("%d", &n);
    lastDigit = n;

    while (lastDigit >= 10)
    {
        lastDigit = n % 10;
    }
    printf("Last Digit = %d", lastDigit);
    return 0;
}