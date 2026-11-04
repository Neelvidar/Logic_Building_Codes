#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountRange
//  Description  : Check digit and return the Count of digits in between 3 & 7
//  Input        : 5324
//  Output       : 2
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);
    return 0;
}