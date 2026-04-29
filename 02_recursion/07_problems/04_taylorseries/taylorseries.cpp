#include <iostream>
using namespace std;

static double p = 1, f = 1;

double taylor(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {

        double r = taylor(x, n - 1);
        p = p * x;
        f = f * n;
        return r + (p / f);
    }
}

int main()
{
    double fr = taylor(3, 10);
    cout << fr;

    return 0;
}