#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Percentage
//  Description  : Calculates percentage from total and obtained marks
//  Input        : 1000 745
//  Output       : 74.5%
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    if(iTotal == 0)
    {
        return 0.0;
    }

    return ((float)iObtained / (float)iTotal) * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.1f%%\n", fRet);

    return 0;
}
