//////////////////////////////////////////////////////////
//
//  Function Name: Factorial
//  Description  : Accepts a number from the user and print factorial
//  Input        : 5
//  Output       : 120
//  Date         : 31/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d", iRet);

    return 0;
}