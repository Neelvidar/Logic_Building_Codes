//////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : Returns the difference between Summation of Even and
//                 Odd Digits .
//  Input        : 2395
//  Output       : -15 (2 - 17)
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
#include <stdio.h>

int CountDiff(int iNo)
{
    int iEven = 0;
    int iOdd = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iEven - iOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}