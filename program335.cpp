#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int isize = 0, icnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>isize;

    // step 1 : Allocate te memory
    ptr = new int[isize];

    // step 2 : Use the memory
    cout<<"Enter the elements : \n";
     for(icnt = 0; icnt < isize; icnt++)
    {
        cin>>ptr[icnt];
    }

    cout<<"Elements of the ptray are : \n";

    for(icnt = 0; icnt < isize; icnt++)
    {
        cout<<ptr[icnt]<<endl;
    }

    // step 3 : Free the memory
    delete [] ptr;

    return EXIT_SUCCESS;
}