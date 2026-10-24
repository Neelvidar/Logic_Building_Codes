//////////////////////////////////////////////////////////
//
//  Function Name: CalculateDiscount
//  Description  : Accepts the purchase amount and
//                 calculates the final payable amount:
//                 below 1000 gets 0% discount, 1000 to
//                 below 5000 gets 10%, 5000 and above gets
//                 20%. A negative amount is invalid.
//  Input        : Float (total purchase amount)
//  Output       : Prints the payable amount with 2 decimal
//                 places, or "Invalid Purchase amount"
//                 (for 2000 it prints 1800.00)
//  Date         : 22/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase amount\n");
        return;
    }
    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount / 100);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0;

    printf("Enter Purchase amount :");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}