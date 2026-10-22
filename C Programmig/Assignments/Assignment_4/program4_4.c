//////////////////////////////////////////////////////////
//
//  Function Name: CheckVotingEligibility
//  Description  : Accepts an age from the user and checks
//                 whether the person is eligible to vote
//                 (age 18 or above). A negative age is
//                 reported as invalid.
//  Input        : Integer (age of the person)
//  Output       : Prints "Eligible for Voting",
//                 "Not Eligible for Voting" or
//                 "Invalid age" on the screen
//  Date         : 20/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}