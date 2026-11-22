#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};
    int icnt = 0;

    cout<<"Elements of the array are : \n";

    for(icnt = 0; icnt < 5; icnt++)
    {
        cout<<arr[icnt]<<endl;
    }

    return EXIT_SUCCESS;
}