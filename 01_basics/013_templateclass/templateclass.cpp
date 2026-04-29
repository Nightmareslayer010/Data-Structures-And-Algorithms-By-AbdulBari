#include <iostream>
using namespace std;
/* A template class allows you to create a class that can work
 with different data types without rewriting the code for
  each type.
It supports generic programming. */

// first write the entire program then convert it into template

template <class T>
class Arithmatic
{
private:
    T a;
    T b;

public:
    Arithmatic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmatic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithmatic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmatic<float> ar(10.67, 5.57);
    cout << "Add: " << ar.add() << " " << "Sub: " << ar.sub() << endl;
}