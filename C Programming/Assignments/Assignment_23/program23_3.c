#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: strtogglex
//  Description  : Accepts a string from user and toggle the case
//  Input        : Hi Learning C
//  Output       : hI lEARNING c
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + ('a' - 'A'); // uppercase → lowercase
        else if (*str >= 'a' && *str <= 'z')
            *str = *str - ('a' - 'A'); // lowercase → uppercase

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    if (scanf("%[^\n]s", arr) == 1)
    {
        strtogglex(arr);

        printf("Modified string: %s\n", arr);
    }

    return 0;
}