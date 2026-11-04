#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: NonFact
//  Description  : Returns the non factors of the given number
//  Input        : 12
//  Output       : 5 7 8 9 10 11
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    NonFact(iValue);
    return 0;
}