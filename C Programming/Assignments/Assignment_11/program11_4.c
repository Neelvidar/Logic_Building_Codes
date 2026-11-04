#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeSumEven
//  Description  : Display The sum of even numbers between given range
//  Input        : Integer
//  Output       : Returns the Sum of Even numbers in between given range
//  Date         : 03/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    if ((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return -1;
    }

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != -1)
    {
        printf("Addition is : %d",iRet);
    }

    return 0;
}