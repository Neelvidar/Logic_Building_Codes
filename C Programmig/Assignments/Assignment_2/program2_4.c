//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts a number and a frequency from
//                 the user and prints the number that many
//                 times on the same line, separated by tabs.
//                 A negative frequency is converted to
//                 positive before printing.
//  Input        : Integer (the number to print),
//                 Integer (how many times to print it)
//  Output       : Prints the number "frequency" times on
//                 the screen
//                 (for 7 and 3 it prints 7  7  7)
//  Date         : 19/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

int Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    printf("Enter Frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
