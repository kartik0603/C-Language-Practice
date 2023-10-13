#include <stdio.h>

int main()
{
    int limit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &limit);

    int i = 1;
    while (i <= limit)
    {
        sum += i;
        i++;
    }

    printf("The sum of numbers from 1 to %d is\t: %d\n", limit, sum);

    return 0;
}
