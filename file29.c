// C program to create calculator using switch case and functions

#include <stdio.h>
int main()
{

    char op;
    float num1;
    float num2;
    float result;

    printf(".......\t This Is Calculator\t........\n");

    printf(" Enter\t Number 1\t for Calculation \t Enter \t + \t - \t* \t /  \t Enter\t Number 2\t for Calculation  \n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf(" %.2f = \t", result);

        break;

    case '-':
        result = num1 - num2;
        printf(" %.2f = \t", result);
        break;

    case '*':
        result = num1 * num2;
        printf(" %.2f = \t", result);

        break;

    case '/':
        result = num1 / num2;
        printf(" %.2f = \t", result);

        break;

    default:
        printf(" Invalid Operator");
        break;
    }
    return 0;
}