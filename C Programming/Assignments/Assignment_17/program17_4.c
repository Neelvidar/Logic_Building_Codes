#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no of Rows & Columns from user & Print the pattern
//  Input        : 4 & 4
//  Output       : 1   2   3   4
//                -1  -2  -3  -4
//                 1   2   3   4
//                -1  -2  -3  -4
//  Date         : 09/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNeg = 0;

    for (i = 1; i <= iRow; i++)
    {
        iNeg = -1;
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%4d", iNeg); // even rows: Negative
                iNeg--;
            }
            else
            {
                printf("%4d", j); // odd rows: Positive
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}