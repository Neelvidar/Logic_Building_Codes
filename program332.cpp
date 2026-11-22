#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {0};
    int icnt = 0;

    cout<<"Enter the elements : \n";
     for(icnt = 0; icnt < 5; icnt++)
    {
        cin>>arr[icnt];
    }

    cout<<"Elements of the array are : \n";

    for(icnt = 0; icnt < 5; icnt++)
    {
        cout<<arr[icnt]<<endl;
    }

    return EXIT_SUCCESS;
}