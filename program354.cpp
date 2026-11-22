#include<iostream>
using namespace std;

class Number
{
    private :
        int *arr;
        int ilength;

    public :    
        Number(int isize)
        {
            cout<<"Inside Constructor\n";
            this->ilength = isize;
            this->arr = new int[ilength];
        }

        ~Number()
        {
            cout<<"Inside Desctructor\n";
            delete [] this->arr;
        }

        void Accept()
        {
            int icnt = 0;

            cout<<"Enter the elements : \n";

            for(icnt = 0; icnt < ilength; icnt++)
            {
                cin>>arr[icnt];
            }
        }

        void Display()
        {
            int icnt = 0;

            cout<<"Elements of the array are : \n";

            for(icnt = 0; icnt < ilength; icnt++)
            {
                cout<<arr[icnt]<<endl;
            }
        }

        int Summation()
        {
            int isum = 0, icnt = 0;

            for(icnt = 0; icnt < ilength; icnt++)
            {
                isum = isum + arr[icnt];
            }
            return isum;            
        }

        float Average()
        {            
            int isum = 0, icnt = 0;

            for(icnt = 0; icnt < ilength; icnt++)
            {
                isum = isum + arr[icnt];
            }
            return ((float)isum / (float)ilength); 
        }
};

int main()
{
    int isize = 0, iret = 0;
    float fret = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>isize;
    // step 1 : Allocate memory
    Number *number1 = new Number(isize);
    
    // step 2 : Use the memory
    number1->Accept();
    number1->Display();

    iret = number1->Summation();
    cout<<"Summation is : "<<iret<<endl;

    fret = number1->Summation();
    cout<<"Average is : "<<fret<<endl;

    //step 3 : Deallocate the memory
    delete number1;
        
    return EXIT_SUCCESS;
}