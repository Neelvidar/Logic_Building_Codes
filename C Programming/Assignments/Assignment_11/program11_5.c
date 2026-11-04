#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeDisplayRev
//  Description  : Display all numbers between given range in reverse order
//  Input        : Integer
//  Output       : Returns the numbers between given range in reverse order
//  Date         : 03/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid Range\n");

        return;
    }

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}