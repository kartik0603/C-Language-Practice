// C program to print all natural numbers from 1 to n

#include <stdio.h>
int main()
{
    int a = 1, i;
    printf(" Enter Any Number \t : ");
    scanf("%d", &i);
    while (a <= i)
    {
        printf("%d \n ", a);
        a++;
    }
    return 0;
}