#include <iostream>
using namespace std;
/* Head Recursion (Calls first, prints later)

Function calls itself first
Printing happens after the recursive call
Output occurs during the returning/unwinding phase */
void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << endl;
    }
}
int main()
{

    int x = 3;
    fun(x);

    return 0;
}