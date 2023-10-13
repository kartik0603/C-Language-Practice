// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     int y = 6;
//     printf("The value of Incremented x  is \t:%d and value of incremented y is  \t:%d", ++x, ++y);
//     return 0;
// }

#include <stdio.h>
int main()
{

    int a = 10;
    // printf("%d\n %d\n %d\n %d\n", a++, ++a, a--, --a); 9 10 9 10
    // printf("%d\n %d\n %d\n %d\n", --a, a--, ++a, a++);    10 12 10 10
    // printf("%d\n %d\n %d\n %d\n", a--, --a, a++, ++a);     11 10  11 10

    // printf("%d\n %d\n %d\n %d\n", ++a, a++, --a, a--); 10 8 10 10
    // printf(" %d\n %d\n %d\n %d\n", --a, ++a, a--, a++);   10 10 11 10
    printf(" %d\n %d\n %d\n %d\n", a--, a++, ++a, --a);

    return 0;
}