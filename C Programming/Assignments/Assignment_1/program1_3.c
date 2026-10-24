//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints the numbers from 5 down to 1 on
//                 the same line, separated by spaces,
//                 using a while loop
//  Input        : None
//  Output       : Prints " 5 4 3 2 1" on the screen
//  Date         : 18/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while (i >= 1)
    {
        printf(" %d", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}