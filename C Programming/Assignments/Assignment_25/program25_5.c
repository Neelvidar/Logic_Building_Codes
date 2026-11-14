#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplaySchedule
//  Description  : Accepts division of student from user & displays exam timing (case insensitive)
//  Input        : C
//  Output       : Your exam at 9.20 AM
//  Date         : 14/11/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    // Convert small case to capital to make it case insensitive
    if (chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch (chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM");
            break;
        case 'B':
            printf("Your exam at 8.30 AM");
            break;
        case 'C':
            printf("Your exam at 9.20 AM");
            break;
        case 'D':
            printf("Your exam at 10.30 AM");
            break;
        default:
            printf("Invalid division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
