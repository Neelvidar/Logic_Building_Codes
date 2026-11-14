#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkChar
//  Description  : Accepts a string from user & 1 character and check character
//                 is present in the string or not 
//  Input        : AbCd & B 
//  Output       : Character not found
//  Date         : 13/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
            return TRUE;

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    printf("Enter The Character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }

    return 0;
}