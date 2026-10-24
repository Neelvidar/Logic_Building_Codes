#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if (((iNo % 3) == 0))
    {
        if (((iNo % 5) == 0))
        {
            printf("It is divisible by both\n");
        }
        else
        {
            printf("It is not divisible by 5\n");
        }
    }
    else
    {
        printf("It is not divisible by 3\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter No : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}