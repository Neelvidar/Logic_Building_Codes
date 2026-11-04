#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Multiply
//  Description  : Returns multiplication of three numbers (zeros are ignored)
//  Input        : 5 0 7
//  Output       : 35
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
    }
    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
    }
    if(iNo3 != 0)
    {
        iAns = iAns * iNo3;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);

    return 0;
}
