#include <stdio.h>
int main()
{
    int number;
    long long poroduct = 1;

    printf("Enter Any Number to Calculate product of DIGITS \t : ");
    scanf("%d", &number);

    poroduct = (number == 0 ? 0 : 1);

    while (number != 0)

    {
        poroduct = poroduct * (number % 10);

        number = number / 10;
    }
    printf(" Product of DIGITS = %lld  \n", poroduct);
    return 0;
}