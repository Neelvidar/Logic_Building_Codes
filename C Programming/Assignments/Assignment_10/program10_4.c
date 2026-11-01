#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FhtoCs
//  Description  : Converts temperature from Fahrenheit
//                 into Celsius.
//  Input        : Float (Temperature in Fahrenheit)
//  Output       : Returns temperature in Celsius as double.
//  Date         : 01/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}