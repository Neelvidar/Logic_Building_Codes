#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : Converts distance from kilometre
//                 into meter.
//  Input        : Integer (Distance in kilometre)
//  Output       : Returns distance in meter.
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n", iRet);

    return 0;
}