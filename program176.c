#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool CheckPalindrome(bool iNo)
{
    int iDigit = 0, iRev = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if (iRev == iNo)        // issue
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if (bRet == true)
    {
        printf("Number is Palimdrome\n");
    }
    else
    {
        printf("Number is not Palimdrome\n");
    }

    return EXIT_SUCCESS;
}