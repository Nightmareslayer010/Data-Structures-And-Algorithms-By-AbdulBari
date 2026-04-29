#include <iostream>
using namespace std;

/* Tail Recursion (Prints first, then calls)

Function prints first
Then calls itself
Output happens during the calling/winding phase */

void fun(int n)
{

    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
    }
}

int main()
{

    int x = 3;
    fun(x);
    return 0;
}