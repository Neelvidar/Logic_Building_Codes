#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Display the ASCII Values in Octal, Deciml & Hexadecimal
//  Input        : Character
//  Output       : ASCII Values print on Console
//  Date         : 15/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal: %d\t  Octal: %o\t  Hexadecimal: %x\t", ch, ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}