//      A
//     A B
//    A B C
//   A B C D
//  A B C D E
//  A B C D E
//   A B C D
//    A B C
//     A B
//      A

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
            printf("%c ", j + 64);
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
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    return 0;
}
