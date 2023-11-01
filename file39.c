// C program to print multiplication table of a given number

#include <stdio.h>
int main()
{
    int i, number;

    printf(" Enter Any Number \t : ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d  * %d = %d\n", number, i, (number * i));
    }
    return 0;
}