#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Difference
//  Description  : Difference between Small & Capital Letters
//  Input        : CoconuT
//  Output       : 3    (5 - 2)
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount = 0;
    char cSmall = '\0', cCapital = '\0';

     while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            cSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            cCapital++;
        }
        str++;
    }

    return iCount = cSmall - cCapital; 
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]", arr); 

    iRet = Differnce(arr);

    printf("%d\n", iRet);

    return 0;
}