// ABCDE
// BCDE
// CDE
// DE
// E

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}