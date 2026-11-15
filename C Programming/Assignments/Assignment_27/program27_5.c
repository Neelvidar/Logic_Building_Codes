#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Reverse
//  Description  : Display Sring in Reverse order
//  Input        : String
//  Output       : Reverse String
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Reverse(char *str)
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
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    printf("Reversed String: %s\n", arr);

    return 0;
}