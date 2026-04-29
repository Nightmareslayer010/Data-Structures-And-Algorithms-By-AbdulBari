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
    int isPresent;

    for (int i = 0; i < m; i++)
    {
        isPresent = false;
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                isPresent = true;
            }
        }
        if (isPresent == false)
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