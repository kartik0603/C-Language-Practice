#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;

    printf("************ Calculator ************\n");

    while (1)
    {
        printf("Enter Number 1: ");
        scanf("%f", &num1);

        printf("Enter Operator (+, -, *, /, %): ");
        scanf(" %c", &op);

        printf("Enter Number 2: ");
        scanf("%f", &num2);

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero\n");
                continue;
            }
            result = num1 / num2;
            break;

        case '%':
            if (num2 == 0)
            {
                printf("Error: Modulus by zero\n");
                continue;
            }

            printf("Error: Modulus is not defined for floating-point numbers\n");
            continue;

        default:
            printf("Invalid Operator\n");
            continue;
        }

        printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);

        char choice;
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
        {
            break;
        }
    }

    printf("Calculator closed. Goodbye!\n");
    return 0;
}
