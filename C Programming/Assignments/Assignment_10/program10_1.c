#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CircleArea
//  Description  : Calculates the area of a circle.
//  Input        : Float (Radius of circle)
//  Output       : Returns area of circle as double.
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}