//////////////////////////////////////////////////////////
//
//  Function Name: CheckLeapyear
//  Description  : Accepts a year from the user and checks
//                 whether it is a leap year. A year is a
//                 leap year if it is divisible by 400, or
//                 divisible by 4 but not by 100.
//  Input        : Integer (the year to check)
//  Output       : Prints "It is a Leap Year" or
//                 "It is not a leap year" on the screen
//  Date         : 21/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapyear(int iYear)
{
    if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapyear(iYear);

    return EXIT_SUCCESS;
}