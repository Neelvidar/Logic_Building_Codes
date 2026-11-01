//////////////////////////////////////////////////////////
//
//  Function Name: EvenFactorial
//  Description  : Accepts a number from the user and
//                 find even factorial
//  Input        : Integer (the number whose even factorial
//                 is to be displayed)
//  Output       : Returns the even factorial on the screen
//                 (for 5 -> 8 (4*2))
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is : %d",iRet);
    return 0;
}