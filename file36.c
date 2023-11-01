// C program to find sum of natural numbers from 1 to n
#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf(" Enter Any Number \t :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf(" Sum of first %d Natural Number = %d", n, sum);
    return 0;
}
