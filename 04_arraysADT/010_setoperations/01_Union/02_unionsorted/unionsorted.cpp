#include <iostream>
using namespace std;

int main()
{

    int A[5] = {3, 4, 5, 6, 10};
    int B[5] = {2, 4, 5, 7, 12};
    int C[10];
    int m = 5;
    int n = 5;

    int i = 0, j = 0, k = 0;
    for (; i < m && j < n;)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else if (A[i] == B[j])
        {
            C[k] = A[i];
            k++;
            i++;
            j++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    for (; i < m;)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    for (; j < n;)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    return 0;
}
