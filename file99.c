//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5
//  1 2 3 4 5
//   1 2 3 4
//    1 2 3
//     1 2
//      1

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
