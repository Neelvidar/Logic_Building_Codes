#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no if Rows & Columns from user & Print the pattern
//  Input        : 4 & 4
//  Output       : 4   4   4   4
//               : 3   3   3   3
//               : 2   2   2   2
//               : 1   1   1   1
//  Date         : 09/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for (i = 1, iCnt = iRow; i <= iRow; i++, iCnt--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt);
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