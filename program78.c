// Input :10
// Output : 13579

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt = 0;

    // icnt++ -> icnt = icnt + 1;

    for (icnt = 1; icnt <= iNo; icnt = icnt+=2) // short hand assignment operator
    {
        printf("%d\t", icnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}