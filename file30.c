// We considere the following program which the user to type his own ID, if the ID is valid it will ask him to enter his password, if the password is correct the program will print the name of the user, otherwise ,the program will print Incorrect Password and if the ID does not exist , the program will print Incorrect ID

#include <stdio.h>
int main()

{

    int ID = 500;
    int password = 60;

    printf(" Enter Your ID \t  : \n ");
    scanf(" %d", &ID);

    switch (ID)
    {
    case 500:

        printf("  Enter Your PASSWORD  \t : \n");
        scanf(" %d", &password);

        switch (password)
        {
        case 60:
            printf(" Welcome TO The Progrraming World : \t \n");
            break;

        default:
            printf(" Incorrect PASSWORD");
            break;
        }
        break;
    default:
        printf(" Incorrect ID");
        break;
    }
    return 0;
}