#include <iostream>
using namespace std;

void fun(int n)
{

    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{

    fun(3);
    return 0;
}

// when a function calls itself more than 1 time is tree recursion