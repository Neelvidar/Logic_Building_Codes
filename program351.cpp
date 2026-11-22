#include<iostream>
using namespace std;

class Number
{
    public :
        int *arr;
        int ilength;

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
};

int main()
{
    // step 1 : Allocate memory
    Number *number1 = new Number(5);
    
    // step 2 : Use the memory
    number1->Accept();
    number1->Display();

    //step 3 : Deallocate the memory
    delete number1;
        
    return EXIT_SUCCESS;
}