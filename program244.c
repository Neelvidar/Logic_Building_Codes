#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlenX(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
    
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);        //its inbuilt function
    printf("String length is :%d",iRet);

    return EXIT_SUCCESS;
}