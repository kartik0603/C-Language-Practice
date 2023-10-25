// C program to find maximum between two numbers using switch case

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter First Number to find Maximum Number \t : ");
    scanf("%d", &a);

    printf("Enter Second Number to find Maximum Number \t : ");
    scanf("%d", &b);

    switch (a > b)
    {
    case 0:
        printf(" %d is Maximum \n", b);
        break;

    case 1:
        printf(" %d is Maximum", a);
        break;
    }
    return 0;
}