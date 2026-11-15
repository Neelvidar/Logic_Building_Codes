#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FirstChar
//  Description  : Accepts a string from user & 1 character and return
//  character's frequency
//  Input        : AbCd & A
//  Output       : 2
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int index = 0;

    while (*str != '\0')
    {
        if (*str == ch)
            return index;

        str++;
        index++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}