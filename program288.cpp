#include <iostream>
using namespace std;

template <class T>

class Arithmatic
{
  public:
    T No1;
    T No2;

    Arithmatic(T A, T B);
    T Addition();
    T Substraction();
};

template <class T> Arithmatic<T>::Arithmatic(T A, T B)
{
    No1 = A;
    No2 = B;
}

template <class T> T Arithmatic<T>::Addition()
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T> T Arithmatic<T>::Substraction()
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithmatic<int> *aobj = new Arithmatic<int>(11, 10);

    cout << aobj->Addition() << endl;

    delete aobj;

    return EXIT_SUCCESS;
}