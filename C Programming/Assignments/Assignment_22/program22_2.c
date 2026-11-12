#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no from user and display the pattern
//  Input        : 5
//  Output       : 5   #    4   #   3   #   2   #   1   #
//  Date         : 12/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}