//////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description  : Checks whether the given number is
//                 divisible by 5 using the modulus (%)
//                 operator
//  Input        : Integer (the number to check)
//  Output       : BOOL (TRUE if divisible by 5,
//                 FALSE otherwise)
//  Date         : 18/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(BOOL iNo)
{
    if ((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}