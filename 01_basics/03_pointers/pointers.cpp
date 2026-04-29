#include <iostream>
using namespace std;
/* A pointer is a variable that stores the
memory address of another variable. */

/* program can only access stack mem and code section in main
memory to access heap memory we use pointers
and for accessing resources
also used for parameter passing  */

/* whenevr you are dynamically allocating memory
in heap you must releaste it using delete  */

//  size of pointer is independent of its data type 8 byte
int main()
{
    int a = 10;
    int *p;             // declaration
    p = &a;             // initialization
    cout << p << endl;  // giving address
    cout << *p << endl; // dereferncing giving actual value
}