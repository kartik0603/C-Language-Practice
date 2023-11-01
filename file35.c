// C program to print all odd numbers from 1 to n
#include <stdio.h>
int main()
{
    int i, n;
    printf(" Print odd number till \t :");
    scanf("%d", &n);

    printf("All ODD number From 1 to %d are \t : \n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}