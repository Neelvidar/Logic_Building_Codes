#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no from user and display the pattern
//  Input        : 5
//  Output       : 1   *   2   *   3   *   4   *   5   *
//  Date         : 12/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t*\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
