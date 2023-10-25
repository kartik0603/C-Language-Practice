// C program to print number of days in a month using switch case

#include <stdio.h>
int main()
{
    int day;

    printf(" Enter a Month Number (1-12) \t : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf(" The January Month days are 31 \n");
        break;

    case 2:
        printf(" The Febuary Month days are 28/29 \n");
        break;

    case 3:
        printf(" The March Month days are 31 \n");
        break;

    case 4:
        printf(" The April Month days are 30 \n");
        break;
    case 5:
        printf(" The May Month days are 31 \n");
        break;

    case 6:
        printf(" The June Month days are 30 \n");
        break;

    case 7:
        printf(" The July Month days are 31 \n");
        break;

    case 8:
        printf(" The August Month days are 31 \n");
        break;

    case 9:
        printf(" The Sepetember Month days are 30 \n");
        break;

    case 10:
        printf(" The October Month days are 31 \n");
        break;

    case 11:
        printf(" The November Month days are 30 \n");
        break;

    case 12:
        printf(" The December Month days are 31 \n");
        break;

    default:
        printf("Invalid Month Enter");
        break;
    }

    return 0;
}
