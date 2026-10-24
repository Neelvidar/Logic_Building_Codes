//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts a number from the user and
//                 prints "Hello" if the number is less
//                 than 10, otherwise prints "Demo"
//  Input        : Integer (the number to check)
//  Output       : Prints "Hello" if iNo < 10,
//                 else prints "Demo" on the screen
//  Date         : 19/10/2026
//  Author       : Neel Janardan Vidar
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}