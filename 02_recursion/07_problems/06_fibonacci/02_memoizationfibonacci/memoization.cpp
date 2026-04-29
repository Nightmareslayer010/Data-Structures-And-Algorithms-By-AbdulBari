#include <iostream>
using namespace std;

// teqniqu of storing function calls so we can use them later
// is called memoization

static int F[10];
int fib(int n)
{

    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 1] == -1)
        {

            F[n - 1] = fib(n - 1);
        }
        if (F[n - 2] == -1)
        {

            F[n - 2] = fib(n - 2);
        }

        return F[n - 1] + F[n - 2];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << fib(5);

    return 0;
}