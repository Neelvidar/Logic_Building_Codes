#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkVowel
//  Description  : Check whether String contains Vowels or not
//  Input        : String
//  Output       : Result will be print on Console
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
     while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') && 
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^\n]", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("It contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}