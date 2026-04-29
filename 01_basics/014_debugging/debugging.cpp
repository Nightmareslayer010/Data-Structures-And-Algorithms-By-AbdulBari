#include <iostream>
using namespace std;

/* Debugging is the process of executing the program line
by line and tracing it */

/*
1. put breakpoint before breakpoint program will normally
 execute
2.
*/
int main()
{

    int sum = 0;
    int A[] = {2, 4, 6, 7, 9};

    for (int x : A)
    {
        sum = sum + x;
        cout << x << endl;
    }

    cout << "sum: " << sum << endl;
    return 0;
}
