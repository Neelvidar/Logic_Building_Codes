//////////////////////////////////////////////////////////
//
//  Function Name: FindGreater
//  Description  : Accepts three numbers from the user and
//                 finds the greatest of them using
//                 if / else-if / else conditions
//  Input        : Integer (first number),
//                 Integer (second number),
//                 Integer (third number)
//  Output       : Prints the greatest number on the screen
//  Date         : 21/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond, int iThird)
{
    if (iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest \n", iFirst);
    }
    else if (iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest \n", iSecond);
    }
    else
    {
        printf("%d is Greatest \n", iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter Three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}