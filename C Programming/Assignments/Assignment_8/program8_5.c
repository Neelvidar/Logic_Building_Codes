//////////////////////////////////////////////////////////
//
//  Function Name: Table
//  Description  : Accepts a number from the user and print its table in reverse orde
//  Input        : 2
//  Output       : 20 18 16 14 12 10 8 6 4 2
//  Date         : 31/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}