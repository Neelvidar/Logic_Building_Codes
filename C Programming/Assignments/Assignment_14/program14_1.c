#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: MultFact
//  Description  : Returns the Multiplication of factors
//  Input        : 12
//  Output       : 144
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo/2; iCnt > 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}