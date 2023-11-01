// C program to print natural numbers in reverse from n to 1

#include <stdio.h>
int main()
{
    int i, a;

    printf(" Enter Any Number \t : ");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        printf("%d\n ", i);
    }

    return 0;
}