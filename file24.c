// C program to check vowel or consonant using switch case

#include <stdio.h>
int main()
{
    char ch;

    printf(" Enter the Alphabet \t : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf(" The Character  A is VOWEL \n");
        break;

    case 'e':
        printf(" The Character  E is VOWEL \n");
        break;

    case 'i':
        printf(" The Character  I is VOWEL \n");
        break;

    case 'o':
        printf(" The Character  O is VOWEL \n");
        break;

    case 'u':
        printf(" The Character  U is VOWEL \n");
        break;

    case 'A':
        printf(" The Character  A is VOWEL \n");
        break;

    case 'E':
        printf(" The Character  E is VOWEL \n");
        break;

    case 'I':
        printf(" The Character  I is VOWEL \n");
        break;

    case 'O':
        printf(" The Character  O is VOWEL \n");
        break;

    case 'U':
        printf(" The Character  U is VOWEL \n");
        break;

    default:
        printf(" Your  Entered  Alphaget is CONSONANT ");
        break;
    }
    return 0;
}