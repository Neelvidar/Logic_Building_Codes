/*
------------------------------------------------
                Operation ||
------------------------------------------------
    Result      Result2         Final Result
------------------------------------------------
    TRUE         TRUE               TRUE            // Short Circuit
    TRUE         FALSE              TRUE            // Short Circuit
    FALSE        TRUE               TRUE
    FALSE        FALSE              FALSE
------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if (((iNo % 3) == 0) || ((iNo % 5) == 0)) // (||) -> Logical OR
    {
        printf("It is divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
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