//////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : Accepts a number from the user and prints first 5 multiples
//  Input        : 4
//  Output       : 4 8 12 16 20
//  Date         : 31/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {

        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}