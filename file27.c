// C program to check positive negative or zero using switch case

#include <stdio.h>
int main()

{
    int number;

    printf(" Enter Any Number \t :  ");
    scanf("%d", &number);

    switch (number > 0)
    {
    case 1:
        printf(" You Entered Positive Number %d \n", number);
        break;
    case 0:
        switch (number < 0)
        {
        case 1:
            printf(" You Entered Negative Number %d \n", number);
            break;

        case 0:
            printf(" YOU Entered Zero %d \n", number);
            break;
        }
    }
    return 0;
}