#include <iostream>
using namespace std;

/* Pass by Value means a copy of the actual value is passed
to the function. Changes made inside the function do NOT
affect the original variable. */

//  any chamges done to formal parameters will not reflect in actual parameters

// use case: when you wanna return a value
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    // here we pass on a and b to swap but only the function parameters get swapped not real one
    swap(a, b);
    cout << a << endl
         << b << endl;

    return 0;
}