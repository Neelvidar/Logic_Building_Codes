#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkCapital
//  Description  : Accepts a character from user & check whether it is Special Symbol or Not 
//  Input        : # 
//  Output       : It is a Special Character
//  Date         : 14/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSpecial(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }

    return 0;
}