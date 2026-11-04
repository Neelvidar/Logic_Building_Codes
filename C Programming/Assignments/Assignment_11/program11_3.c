#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeSum
//  Description  : Display all even numbers between given range
//  Input        : Integer
//  Output       : Returns the Even numbers in between given range
//  Date         : 02/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    if ((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
    }

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iValue1 <= iValue2 && iValue1 >= 0 && iValue2 >= 0)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}