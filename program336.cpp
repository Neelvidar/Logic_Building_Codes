#include<iostream>
using namespace std;

int Summation(int arr[], int ilength)
{
    int icnt = 0, isum = 0;
    
    for(icnt = 0; icnt < ilength; icnt++)
    {
        isum = isum + arr[icnt];
    }
    
    return isum;
    
}

float Average(int arr[], int ilength)
{
    int icnt = 0, iavg = 0;
    
    for(icnt = 0; icnt < ilength; icnt++)
    {
        iavg = iavg + arr[icnt];
    }
    
    return ((float)iavg / (float)ilength);
}

int main()
{
    int *ptr = NULL;
    int isize = 0, icnt = 0;
    int iret = 0;
    float fret = 0.0f;

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

    iret = Summation(ptr ,isize);
    cout<<"Addtion is : "<<iret<<endl;

    fret = Average(ptr, isize);
    cout<<"Average is : "<<fret<<endl;

    // step 3 : Free the memory
    delete [] ptr;

    return EXIT_SUCCESS;
}