#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is\t: %d\n", n, factorial);

    return 0;
}
