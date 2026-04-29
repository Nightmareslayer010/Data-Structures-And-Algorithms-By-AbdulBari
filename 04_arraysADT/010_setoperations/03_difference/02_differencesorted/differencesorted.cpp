#include <iostream>
using namespace std;

int main()
{

    int A[5] = {3, 4, 5, 6, 10};
    int B[5] = {2, 4, 5, 7, 12};
    int C[10];
    int m = 5;
    int n = 5;
    int i = 0;
    int j = 0;
    int k = 0;

    for (; i < m && j < n;)
    {

        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else if (A[i] == B[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    for (int z = 0; z < k; z++)
    {
        cout << C[z] << " ";
    }
    return 0;
}