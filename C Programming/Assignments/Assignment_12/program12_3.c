#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountTwo
//  Description  : Check digit 2 and Count its frequency
//  Input        : 2132
//  Output       : 2
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////


int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);
    return 0;
}