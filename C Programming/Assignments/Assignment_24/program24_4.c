#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: LastChar
//  Description  : Accepts a string from user & 1 character and return
//                 index of last occurence of that character
//  Input        : AbCd & A
//  Output       : 0
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
int LastChar(char *str, char ch)
{
    int index = 0;
    int lastIndex = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        lastIndex = index;

        str++;
        index++;
    }

    return lastIndex;
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

    iRet = LastChar(arr, cValue);

    printf("Character Location is : %d", iRet);

    return 0;
}