#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Display letters till Z
//  Input        : m
//  Output       : m to z
//  Date         : 15/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    char letter = 0;
    if (ch >= 'A' && ch <= 'Z')
    {
        for (letter = ch; letter <= 'Z'; letter++)
            printf("%c ", letter);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (letter = ch; letter <= 'z'; letter++)
            printf("%c ", letter);
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
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}