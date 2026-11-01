//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts a number from the user and prints that number
//                 of * & #
//  Input        : 5
//  Output       : * * * * * # # # # #
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}