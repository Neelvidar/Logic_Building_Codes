#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name       : CountWhite
//  Description         : Accepts a string from user and count white spaces from that
//  String Input        : Abcd 123 
//  Output              : 1   
//  Date                : 13/11/2026
//  Author              : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}
