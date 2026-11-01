#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RectArea
//  Description  : Calculates the area of a rectangle.
//  Input        : Two Float values (Width and Height)
//  Output       : Returns area of rectangle as double.
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %lf\n", dRet);

    return 0;
}