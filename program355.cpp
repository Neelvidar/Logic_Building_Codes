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
    Number nobj1(5);
    Number nobj2(7);

    nobj1.Accept();
    cout<<"Addition is : "<<nobj1.Summation()<<endl;

    nobj2.Accept();
    cout<<"Addition is : "<<nobj2.Summation()<<endl;

    return EXIT_SUCCESS;
}