#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter Number of elements you want :\n");
    scanf("%d", &iSize);

    // Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

    // Step 2 : Use the Memory
    printf("Enter the elements : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d\n", &ptr[iCnt]);
    }

    printf("Elements of the Array are : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // Step 3 : Free The Memory
    free(ptr);

    return EXIT_SUCCESS;
}