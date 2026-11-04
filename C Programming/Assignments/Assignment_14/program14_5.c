#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FactDiff
//  Description  : Returns difference between summation of factors
//                 and summation of non factors of the given number
//  Input        : 12
//  Output       : -34   (16 - 50)
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
