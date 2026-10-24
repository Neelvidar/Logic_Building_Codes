//////////////////////////////////////////////////////////
//
//  Function Name: CheckNumber
//  Description  : Accepts a number from the user and
//                 checks whether it is positive or
//                 negative. Zero is treated as positive.
//  Input        : Integer (the number to check)
//  Output       : Prints "It is Positive number" or
//                 "It is Negative Number" on the screen
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue >= 0)
    {
        printf("It is Positive number\n");
    }
    else
    {
        printf("It is Negative Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}