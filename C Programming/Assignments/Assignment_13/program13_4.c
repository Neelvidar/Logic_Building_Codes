#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: MultiDigits
//  Description  : Check digit and return Multiplication of all Digits
//  Input        : 2395
//  Output       : 270
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int MultiDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);
    return 0;
}