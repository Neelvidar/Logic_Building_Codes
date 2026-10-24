//////////////////////////////////////////////////////////
//
//  Function Name: FindGreater
//  Description  : Accepts two numbers from the user and
//                 finds which one is greater, or reports
//                 that both are equal
//  Input        : Integer (first number),
//                 Integer (second number)
//  Output       : Prints the greater number, or
//                 "Both Numbers are equal", on the screen
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if ((iFirst) > (iSecond))
    {
        printf("%d is Greater \n", iFirst);
    }
    else if ((iSecond) > (iFirst))
    {
        printf("%d is Greater \n", iSecond);
    }
    else
    {
        printf("Both Numbers are equal \n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}