#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: strlwrx
//  Description  : Accepts a string from user and converting it into lower case
//  Input        : AbCd
//  Output       : abcd
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified String is %s\n", arr);
    return 0;
}