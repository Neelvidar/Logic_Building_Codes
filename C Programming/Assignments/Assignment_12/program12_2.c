#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkZero
//  Description  : Check digit 0 is present or not in given number
//  Input        : Integer
//  Output       : It contains 0 or Not
//  Date         : 03/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
    if (iNo == 0)
    {
        return TRUE;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}