#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: struprx
//  Description  : Accepts a string from user and converting it into upper case
//  Input        : AbCd
//  Output       : ABCD
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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