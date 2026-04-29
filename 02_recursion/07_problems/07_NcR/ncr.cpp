#include <iostream>
using namespace std;

int fact(int f)
{

    if (f == 0)
    {
        return 1;
    }
    else
    {
        return fact(f - 1) * f;
    }
}

int nCr(int n, int r)
{

    int num = fact(n);
    int den = fact(r) * fact(n - r);

    return num / den;
}

int main()
{

    cout << nCr(5, 1);

    return 0;
}