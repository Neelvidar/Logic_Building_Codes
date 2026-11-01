#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: SquareMeter
//  Description  : Converts area from square feet
//                 into square meter.
//  Input        : Integer (Area in square feet)
//  Output       : Returns area in square meter as double.
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf\n", dRet);

    return 0;
}