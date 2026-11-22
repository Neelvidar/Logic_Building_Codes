#include<iostream>
using namespace std;

class Number
{
    public :
        int *arr;
        int ilength;

        Number(int isize)
        {
            this->ilength = isize;
            this->arr = new int[ilength];
        }

        ~Number()
        {
            delete [] this->arr;
        }
};

int main()
{
    Number number1(5);
    Number number2(7);

    return EXIT_SUCCESS;
}