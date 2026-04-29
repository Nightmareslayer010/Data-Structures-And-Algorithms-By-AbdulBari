#include <iostream>
using namespace std;

int sum(int n)
{

    if (n == 0)
    {

        return 0;
    }
    else
    {

        return sum(n - 1) + n;
    }
}

int main()
{

    int op = sum(5);
    cout << op;

    return 0;
}