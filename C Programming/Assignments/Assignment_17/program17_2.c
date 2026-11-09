#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Accepts a no of Rows & Columns from user & Print the pattern
//  Input        : 4 & 4
//  Output       :  2   4   6   8
//                  1   3   5   7
//                  2   4   6   8
//                  1   3   5   7
//  Date         : 09/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iEven = 0, iOdd = 0;

    for (i = 0; i < iRow; i++)
    {
        iEven = 2, iOdd = 1;

        for (j = 0; j < iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", iEven);
                iEven = iEven + 2;
            }
            else
            {
                printf("%d\t", iOdd);
                iOdd = iOdd + 2;
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