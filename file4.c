#include <stdio.h>
int main()
{
    int a = 4;
    int b = 9;
    int c = 100;
    int d = 100;
    int e = 50;
    int sum = a + b - c;
    int multiply = a * b * c;
    int division = c / d;
    int result = a + b - c / d * e;

    printf("The sum is \t:%d\n", sum);
    printf("The Multilpication  is \t:%d\n", multiply);
    printf("The Division  is \t:%d\n", division);
    printf("The Result is \t:%d", result);

    return 0;
}