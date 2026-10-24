//////////////////////////////////////////////////////////
//
//  Function Name: CheckEvenOdd
//  Description  : Accepts a number from the user and
//                 checks whether it is even or odd using
//                 the modulus (%) operator
//  Input        : Integer (the number to check)
//  Output       : Prints "It is Even number" or
//                 "It is Odd Number" on the screen
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}