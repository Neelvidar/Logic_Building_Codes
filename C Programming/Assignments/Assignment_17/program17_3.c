#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no of Rows & Columns from user & Print the pattern
//  Input        : 4 & 4
//  Output       :  a   b   c   d
//                  1   2   3   4
//                  a   b   c   d
//                  1   2   3   4
//  Date         : 09/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for (i = 0; i < iRow; i++)
    {
        char ch = 'a';
        for (j = 0; j < iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", j + 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : \n");
    scanf("%d   %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}