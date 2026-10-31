//////////////////////////////////////////////////////////
//
//  Function Name: OddDisplay
//  Description  : Accepts a number from the user and prints all odd numbers upto N
//  Input        : 8
//  Output       : 1 3 5 7
//  Date         : 31/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt = iCnt + 2)
    {

        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}