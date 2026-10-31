//////////////////////////////////////////////////////////
//
//  Function Name: Number
//  Description  : Accepts a number from the user and prints that number
//                 lies in which Parameters if it is less than 50 then print
//                 small if it is greater than 50 & less than 100 print medium,
//                 if it is greater than 100 print large
//  Input        : Integer
//  Output       : Parameters of that number (Small/Medium/Large)
//  Date         : 31/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Medium\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}