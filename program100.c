#include <stdio.h>
#include <stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are\n", iNo);
    
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter No : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N) : Order Of N