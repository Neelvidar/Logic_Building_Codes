// $    %   &   *   #

#include <stdio.h>
#include <stdlib.h>

int CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if ((*str >= '0') && (*str <= '9'))
        {
            iCountDigits++;
        }
        str++;
    }

    printf("Number of Capital letters : %d\n", iCountCapital);
    printf("Number of Small letters : %d\n", iCountSmall);
    printf("Number of digits : %d\n", iCountDigits);
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}