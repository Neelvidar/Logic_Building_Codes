#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountCapital
//  Description  : Frequency of Capital letters
//  Input        : ABCDefgh
//  Output       : 4
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter String : ");
    scanf("%[^\n]", arr); 

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}