//////////////////////////////////////////////////////////
//
//  Function Name: Accept
//  Description  : Prints the star (*) symbol on the same
//                 line, as many times as the given number,
//                 using a for loop
//  Input        : Integer (how many stars to print)
//  Output       : Prints "*" iNo times on the screen
//                 (for 5 it prints *****)
//  Date         : 18/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}