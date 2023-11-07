//  To find FIRST DIGIT and LAST DIGIT of Any Number

#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit;

    printf("Enter Any Digits Number \t :");
    scanf("%d", &n);

    lastDigit = n % 10;
    firstDigit = n;

    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    printf("First Digit =%d\n", firstDigit);
    printf("Last Digit =%d\n", lastDigit);
    return 0;
}