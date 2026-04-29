#include <iostream>
using namespace std;

/* Array size can only be increased in heap
but still original array size cant be resized
we justr make a bigger size array and point
our original pointer to it */

int main()
{

    int *p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    // now we make new pointer q of size 10
    int *q;
    q = new int[10];

    // copying
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // all values copied to q so delete p to free mem
    delete[] p;

    // point p to q and make q null
    p = q;
    q = nullptr;

    // checking

    for (int i = 0; i < 5; i++)
    {

        cout << p[i] << endl;
    }

    return 0;
}