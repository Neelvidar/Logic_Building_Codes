#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: ChkCapital
//  Description  : Accepts a character from user & check whether it is Capital or Not 
//                 print characters till Z
//  Input        : A 
//  Output       : A to Z 
//  Date         : 14/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        for (char c = ch; c <= 'Z'; c++)
            printf("%c ", c);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (char c = ch; c >= 'a'; c--)
            printf("%c ", c);
    }
    else
    {
        printf("Please enter an alphabetic character.");
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}