#include <iostream>
using namespace std;

int main()
{

    int A[5] = {3, 5, 10, 4, 6};
    int B[5] = {12, 4, 7, 2, 5};
    int C[10];
    int m = 5;
    int n = 5;
    int k = 0;
    int isDuplicate;
    for (int i = 0; i < 5; i++)
    {
        isDuplicate = false;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                isDuplicate = true;
            }
        }
        if (isDuplicate == true)
        {
            C[k] = A[i];
            k++;
        }
    }

    for (int z = 0; z < k; z++)
    {
        cout << C[z] << " ";
    }

    return 0;
}