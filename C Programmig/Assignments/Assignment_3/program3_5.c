//////////////////////////////////////////////////////////
//
//  Function Name: ChkVowel
//  Description  : Checks whether the given character is a
//                 vowel (a, e, i, o, u in lowercase or
//                 uppercase) by comparing it with each
//                 character of a vowel string
//  Input        : Character (the character to check)
//  Output       : BOOL (TRUE if the character is a vowel,
//                 FALSE otherwise)
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CNo)
{
    char vowels[] = "aeiouAEIOU";
    int i = 0;

    for (i = 0; vowels[i] != '\0'; i++)
    {
        if (vowels[i] == CNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue); // Notice the space before %c

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}