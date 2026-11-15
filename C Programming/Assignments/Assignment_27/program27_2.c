#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountSmall
//  Description  : Frequency of Small letters
//  Input        : ABCDefgh
//  Output       : 4
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}