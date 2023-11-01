// C program to print alphabets from a to z

#include <stdio.h>
int main()
{
    char ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c \n", ch);
        ch++;
    }
    return 0;
}