//////////////////////////////////////////////////////////
//
//  Function Name: DisplayEvenFactor
//  Description  : Accepts a number from the user and
//                 prints only the even factors of that
//                 number, checking from 1 up to half of
//                 the number. A negative number is
//                 converted to positive first.
//  Input        : Integer (the number whose even factors
//                 are to be displayed)
//  Output       : Prints the even factors on the screen
//                 (for 12 it prints 2 4 6)
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}