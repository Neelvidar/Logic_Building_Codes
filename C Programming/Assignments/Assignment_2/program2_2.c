//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts a number from the user and
//                 prints the star (*) symbol on the same
//                 line, that many times, by decrementing
//                 the number in a while loop
//  Input        : Integer (how many stars to print)
//  Output       : Prints "*" iNo times on the screen
//                 (for 5 it prints *****)
//  Date         : 19/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    while (iNo > iCnt)
    {
        printf("*");

        iNo--;
    }
    return iNo;
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}