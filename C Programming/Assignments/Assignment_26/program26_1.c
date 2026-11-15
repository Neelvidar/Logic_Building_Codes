#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayASCII
//  Description  : Display ASCII table
//  Input        : None
//  Output       : ASCII table 
//  Date         : 15/11/2026 
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII(void)
{
    for (int i = 0; i <= 255; i++)
    {
        printf("Dec: %3d  Oct: %03o  Hex: %02X  Char: %c\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}