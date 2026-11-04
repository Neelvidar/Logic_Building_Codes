#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: SumNonFact
//  Description  : Returns summation of all non factors of the given number
//  Input        : 12
//  Output       : 50   (5 + 7 + 8 + 9 + 10 + 11)
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
