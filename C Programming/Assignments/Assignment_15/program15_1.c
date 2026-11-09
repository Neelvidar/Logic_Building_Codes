//////////////////////////////////////////////////////////
//
//  Function Name: main
//  Description  : Accepts a name from user and prints that name
//  Input        : ABCD
//  Output       : ABCD
//  Date         : 04/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%29[^\n]", Name);        

    printf("Your name is %s\n", Name);

    return 0;
}
