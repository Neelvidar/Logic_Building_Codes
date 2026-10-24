
//////////////////////////////////////////////////////////
//
//  Function Name: ChkEven
//  Description  : Checks whether the given number is even
//                 using the modulus (%) operator
//  Input        : Integer (the number to check)
//  Output       : BOOL (TRUE if the number is even,
//                 FALSE if it is odd)
//  Date         : 19/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("This is Even\n");
    }
    else
    {
        printf("This is odd\n");
    }
    return 0;
}