#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkSpecial
//  Description  : Check whether character is special symbol or not
//  Input        : #
//  Output       : It is a special character
//  Date         : 15/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return FALSE;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
       return FALSE;
    }
    else
    {
        return TRUE;
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}