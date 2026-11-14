#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkChar
//  Description  : Accepts a string from user & 1 character and return character's
//                 frequency
//  Input        : AbCd & A
//  Output       : 2
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
int ChkChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
            iCount++;

        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    printf("Enter The Character : ");
    scanf(" %c", &cValue);

    iRet = ChkChar(arr, cValue);

    printf("Character Frequency is : %d",iRet);

    return 0;
}