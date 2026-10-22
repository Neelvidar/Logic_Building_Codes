//////////////////////////////////////////////////////////
//
//  Function Name: CheckDivisibility
//  Description  : Accepts a number from the user and
//                 checks whether it is divisible by 5
//                 using the modulus (%) operator
//  Input        : Integer (the number to check)
//  Output       : Prints "Divisible by 5" or
//                 "Not Divisible by 5" on the screen
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}