#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkCapital
//  Description  : Accepts a character from user & check whether it is Capital or Not
//  Input        : A
//  Output       : It is Capital Character
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 65 && ch <= 90))
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
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital character");
    }

    return 0;
}