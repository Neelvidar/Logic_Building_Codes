//////////////////////////////////////////////////////////
//
//  Function Name: CheckAdmission
//  Description  : Accepts marks and age from the user and
//                 checks admission eligibility. A student
//                 is eligible if marks are 60 or more and
//                 age is 17 or more.
//  Input        : Float (marks obtained),
//                 Integer (age of the student)
//  Output       : Prints "Eligible for Admission" or
//                 "Not Eligible" on the screen
//  Date         : 22/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0;
    int iAge = 0;

    printf("Enter marks & age :");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}