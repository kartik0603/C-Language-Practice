// C program to find sum of even numbers between 1 to n

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf(" Enter Any Number \t : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf(" Sum Of ALL EVEN NUMBER IS %d = %d \n", n, sum);
    return 0;
}