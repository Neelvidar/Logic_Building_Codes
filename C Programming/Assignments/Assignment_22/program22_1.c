#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no from user and display the pattern
//  Input        : 5
//  Output       : A   B   C   D   E
//  Date         : 12/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for (i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
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