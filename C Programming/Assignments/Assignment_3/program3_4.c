//////////////////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description  : Accepts a character from the user and
//                 converts its case: lowercase becomes
//                 uppercase and uppercase becomes
//                 lowercase. Other characters print nothing.
//  Input        : Character (the character to convert)
//  Output       : Prints the case-converted character
//                 on the screen
//                 (for 'a' it prints A, for 'G' it prints g)
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CNo)
{
    if ((CNo >= 'a') && (CNo <= 'z'))
    {
        printf("%c", CNo - 32);
    }
    else if ((CNo >= 'A') && (CNo <= 'Z'))
    {
        printf("%c", CNo + 32);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter character\n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return 0;
}