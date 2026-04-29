#include <iostream>
using namespace std;
// dynamic arrays
// size determined at runtime
// after the program runs

int main()
{

    int *p;
    p = new int[5];

    // p = {3, 5, 7, 9, 11};

    /* we cant do this because we are trying
    to assign value to a pointer */

    // so we can do this

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    int n = 5;
    for (int i = 0; i < n; i++)
    {

        cout << p[i] << endl;
    }

    return 0;
}