//////////////////////////////////////////////////////////
//
//  Function Name: PrintEven
//  Description  : Accepts a number from the user and
//                 prints that many even numbers starting
//                 from 2, separated by tabs, using a for
//                 loop. Nothing is printed if the number
//                 is zero or negative.
//  Input        : Integer (how many even numbers to print)
//  Output       : Prints the first iNo even numbers on
//                 the screen
//                 (for 5 it prints 2  4  6  8  10)
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        return;
    }
    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue = 0;
    printf("enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}