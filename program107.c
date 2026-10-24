#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == 1)
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("it is not a Prime Number\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}