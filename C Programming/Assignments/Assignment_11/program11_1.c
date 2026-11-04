#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeDisplay
//  Description  : Display all numbers between given range 
//  Input        : Integer 
//  Output       : Returns the number in between given range
//  Date         : 02/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
   if(iStart > iEnd)
   {
        printf("Invalid Range\n");

        return;
   }

   int iCnt = 0;
   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
        printf("%d\t",iCnt);
   }
   printf("\n");

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}