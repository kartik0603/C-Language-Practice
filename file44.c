// Program to swap first and last digit of a number
/**
 * C program to swap first and last digit of a number
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    printf("Enter any number \t : ");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log10(num);

    firstDigit = (int)(num / pow(10, digits));

    swappedNum = lastDigit;
    swappedNum *= (int)pow(10, digits);
    swappedNum += num % ((int)pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d \n", num);
    printf("Number after swapping first and last digit: %d \n", swappedNum);

    return 0;
}