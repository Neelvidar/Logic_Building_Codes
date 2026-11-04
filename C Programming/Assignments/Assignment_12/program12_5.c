#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Count
//  Description  : Check digits which are less than 6 and Count its frequency
//  Input        : 2156
//  Output       : 3
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int Count(int iNo)
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
        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);
    return 0;
}