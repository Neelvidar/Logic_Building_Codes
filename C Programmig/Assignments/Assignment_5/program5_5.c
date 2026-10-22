//////////////////////////////////////////////////////////
//
//  Function Name: CheckCharacterType
//  Description  : Accepts a character from the user and
//                 checks whether it is an uppercase
//                 alphabet, lowercase alphabet, digit or
//                 special character using ASCII ranges
//  Input        : Character (the character to check)
//  Output       : Prints "Uppercase Alphabet",
//                 "Lowercase Alphabet", "Digit" or
//                 "Special Character" on the screen
//  Date         : 21/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}