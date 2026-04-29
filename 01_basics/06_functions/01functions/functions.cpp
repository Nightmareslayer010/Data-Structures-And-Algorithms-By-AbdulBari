#include <iostream>
using namespace std;

/* function is a piece of code that performs a specific
task it is group of instructions also called as modules
/modular/procedual programming */

// reusability

/* everything inside a single body is monolithic programming */

int add(int a, int b) // a and b are formal parameters
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y, z;
    x = 10;
    y = 20;
    // function call
    z = add(x, y); //  xnad y are arguments or actual parameters
    cout << z;
    return 0;
}