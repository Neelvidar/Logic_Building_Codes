#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : Display digits in reverse order 
//  Input        : Integer
//  Output       : Returns the digits reverse order
//  Date         : 03/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}