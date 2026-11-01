//////////////////////////////////////////////////////////
//
//  Function Name: Dollar to INR
//  Description  : Accepts amount in USD and convert into INR (1$ = 70Rs)
//                 of * & #
//  Input        : 5
//  Output       : 350
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    if (iNo <= 0)
    {
        printf("Invalid Amount\n");
    }
    if(iNo != 0)
    {
        iINR = iNo * 70;
    }
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return EXIT_SUCCESS;
}