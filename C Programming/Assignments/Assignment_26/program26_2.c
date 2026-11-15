#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Display Corresponding Small/Capital letter
//  Input        : (A) / (b) / (0) / (@)
//  Output       : (a) / (B) / (0) / (@)
//  Date         : 15/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >= 65) && (ch <= 90))
    {
        ch = ch + 32;
        printf("%c", ch);
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    printf("Corresponding Character is : ",cValue);

    Display(cValue);

    return 0;
}