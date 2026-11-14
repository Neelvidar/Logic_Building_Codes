#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: StrRevX
//  Description  : Accepts a string from user & reverse that string
//  Input        : AbCd 
//  Output       : dCbA
//  Date         : 13/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////
void StrRevX(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is : %s", arr);

    return 0;
}