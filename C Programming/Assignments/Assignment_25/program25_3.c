#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkDigit
//  Description  : Accepts a character from user & check whether it is Digit or not
//  Input        : 7
//  Output       : It is Digit
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if (ch >= 48 && ch <= 57)
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}
