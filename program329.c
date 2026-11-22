#include<stdio.h>
#include<stdlib.h>

int Summation(int arr[], int ilength)
{
    int icnt = 0, isum = 0;
    
    for(icnt = 0; icnt < ilength; icnt++)
    {
        isum = isum + arr[icnt];
    }
    
    return isum;
    
}

float Average(int arr[], int ilength)
{
    int icnt = 0, iavg = 0;
    
    for(icnt = 0; icnt < ilength; icnt++)
    {
        iavg = iavg + arr[icnt];
    }
    
    return (float)(iavg/ilength);
}

int main()
{
    int *ptr = NULL;
    int isize = 0, icnt = 0, iret = 0;
    float fret = 0.0f;

    printf("Enter number of elements you want : \n");
    scanf("%d",&isize);
    
    // step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * isize);

    // step 2 : Use the memory
    printf("Enter the elements : \n");
    for(icnt = 0; icnt < isize; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = Summation(ptr, isize);
   
    fret = Average(ptr, isize);

    printf("Addition of all elements : %d\n",iret);

    printf("Average is : %f\n",fret);

    // step 3 : Free the memory
    free(ptr);

    return EXIT_SUCCESS;
}