#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 2, 3, 5};
    int sum = 0;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    int lvalue = 5;
    int sumofn = (lvalue * (lvalue + 1)) / 2;
    int missing = sumofn - sum;
    cout << missing;
    return 0;
}