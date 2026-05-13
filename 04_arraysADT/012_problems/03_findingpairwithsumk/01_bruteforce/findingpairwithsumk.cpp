#include <iostream>
using namespace std;

int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int sum = 10;
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sum == A[i] + A[j])
            {
                cout << "Pairs: " << A[i] << " " << A[j] << endl;
            }
        }
    }

    return 0;
}