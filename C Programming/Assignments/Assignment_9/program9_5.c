//////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : Returns the difference between Even and
//                 Odd factorials.
//  Input        : Integer (the number whose Even and Odd
//                 factorials are to be calculated)
//  Output       : Returns the difference between Even and
//                 Odd factorials.
//                 (For 5, it returns -7 (8 - 15))
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is: %d\n", iRet);

    return 0;
}