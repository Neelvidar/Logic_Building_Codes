//////////////////////////////////////////////////////////
//
//  Function Name: DisplayGrade
//  Description  : Accepts marks from the user and displays
//                 the grade: 90 and above A, 75 and above B,
//                 60 and above C, 40 and above D, below 40
//                 Fail. Marks below 0 or above 100 are
//                 invalid.
//  Input        : Float (marks obtained)
//  Output       : Prints the grade, "Fail" or
//                 "Invalid Marks" on the screen
//  Date         : 21/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Marks\n");
    }
    else if (fMarks >= 90.0f)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75.0f)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60.0f)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40.0f)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}