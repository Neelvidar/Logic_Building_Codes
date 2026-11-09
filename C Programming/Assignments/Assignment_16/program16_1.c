#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no if Rows & Columns from user & Print the pattern
//  Input        : 4 & 4
//  Output       : A   B   C   D
//               : A   B   C   D
//               : A   B   C   D
//               : A   B   C   D
//  Date         : 09/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i =1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            printf("%c\t", ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows and Columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}