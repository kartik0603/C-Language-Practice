// If ... Else

// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed

#include <stdio.h>

int main()
{
    int x = 20;
    int y = 18;

    int a = 15;
    int b = 17;

    int time = 20;
    int time1 = 20;
    int time2 = 20;

    // The if Statement

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    if (a < b)
    {
        printf("a is less than b\n");
    }

    //     The else Statement
    // Use the else statement to specify a block of code to be executed if the condition is false.
    if (time < 18)
    {
        printf("Good day.\n");
    }
    else
    {
        printf("Good evening.\n");
    }
    if (time1 <= 21)
    {
        printf("You are Late\n");
    }
    else
    {
        printf("You are on time\n");
    }
    if (time2 >= 21)
    {
        printf("You are Late\n");
    }
    else
    {
        printf("You are on time\n");
    }

    return 0;
}