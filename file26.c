// C program to check even or odd number using switch case

#include <stdio.h>

int main()
{

    int a;

    printf(" Enter Any Number \t : ");
    scanf("%d", &a);

    switch (a % 2)
    {
    case 0:

        printf(" Your Entered Number is EVEN");
        break;

    default:
        printf("Your Entered Number is ODD");
        break;
    }
    return 0;
}