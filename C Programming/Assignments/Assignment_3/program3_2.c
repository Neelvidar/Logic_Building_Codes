//////////////////////////////////////////////////////////
//
//  Function Name: DisplayFactor
//  Description  : Accepts a number from the user and
//                 prints its factors that are 1 or even,
//                 checking from 1 up to half of the number.
//                 A negative number is converted to
//                 positive first.
//  Input        : Integer (the number whose factors are
//                 to be displayed)
//  Output       : Prints the factors (1 and even factors)
//                 on the screen
//                 (for 12 it prints 1 2 4 6)
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i) == 0)
        {
            if ((iNo % i) == 0)
            {
                if (i == 1 || (i % 2) == 0)
                {
                    printf("%d ", i);
                }
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}