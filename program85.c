/*
------------------------------------------------
                Operation &&
------------------------------------------------
    Result      Result2         Final Result
------------------------------------------------
    TRUE         TRUE               TRUE
    TRUE         FALSE              FALSE
    FALSE        TRUE               FALSE           //Short Hand Circuit
    FALSE        FALSE               FALSE           //Short Hand Circuit
------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if (((iNo % 3) == 0) && ((iNo % 5) == 0))  
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