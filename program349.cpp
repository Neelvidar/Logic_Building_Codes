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
};

int main()
{
    // step 1 : Allocate memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

    // step 2 : Use the memory

    //step 3 : Deallocate the memory
    return EXIT_SUCCESS;
}