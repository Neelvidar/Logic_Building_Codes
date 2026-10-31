/*
input : 4
output : 0  1   2   3   4
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}