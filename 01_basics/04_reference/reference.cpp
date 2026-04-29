#include <iostream>
using namespace std;
/* A reference is an alias (another name) given to
 an existing variable.It does not store a new value
  — it only refers to the original variable. */

int main()
{
    int a = 10;
    /*    we use & to make a reference variable it has
     same value and address as a now
      */
    int &r = a;
    cout << a << endl;
    r++;
    cout << a << endl; // both will be 11
    cout << r << endl; // 11
}