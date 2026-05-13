#include <iostream>
using namespace std;

int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int sum = 10;
    int H[17] = {0};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < n; i++)
    {
        if (H[sum - A[i]] == 1)
        {
            cout << "Pair: " << A[i] << " " << sum - A[i] << endl;
        }
        H[A[i]] = 1;
    }

    return 0;
}