#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int isize = 0;

    cout<<"Enter number of elements : \n";
    cin>>isize;

    // step 1 : Allocate te memory
    ptr = new int[isize];

    // step 2 : Use the memory

    // step 3 : Free the memory
    delete ptr;

    return EXIT_SUCCESS;
}