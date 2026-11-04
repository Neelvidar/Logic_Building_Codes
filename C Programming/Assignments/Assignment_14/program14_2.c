#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FactRev
//  Description  : Returns the factors in reverse order
//  Input        : 12
//  Output       : 6 4 3 2 1
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void MultFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo / 2; iCnt > 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultFact(iValue);

    return 0;
}