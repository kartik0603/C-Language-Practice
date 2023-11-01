// C program to find sum of odd numbers from 1 to n

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter Any Number \t : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf(" Sum of ODD Number IS %d = %d", n, sum);
    return 0;
}