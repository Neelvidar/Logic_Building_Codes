//////////////////////////////////////////////////////////
//
//  Function Name: OddFactorial
//  Description  : Accepts a number from the user and
//                 find odd factorial
//  Input        : Integer (the number whose odd factorial
//                 is to be displayed)
//  Output       : Returns the odd factorial on the screen
//                 (for 5 it will display 15(5*3*1))
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 1)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is : %d", iRet);
    return 0;
}