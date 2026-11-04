#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountEven
//  Description  : Check digit and return the Count of even digit frequency
//  Input        : 2134 
//  Output       : 2
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int CountEven(int iNo)
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
        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("%d", iRet);
    return 0;
}