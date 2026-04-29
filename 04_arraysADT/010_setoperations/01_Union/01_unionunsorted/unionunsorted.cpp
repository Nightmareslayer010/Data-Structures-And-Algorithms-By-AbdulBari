#include <iostream>
using namespace std;

int main()
{

    int A[5] = {3, 5, 10, 4, 6};
    int B[5] = {12, 4, 7, 2, 5};
    int C[10];
    int k = 0;

    for (int i = 0; i < 5; i++)
    {
        C[k] = A[i];
        k++;
    }

    for (int j = 0; j < 5; j++)
    {
        B[j];
        int isduplicate = false;
        for (int x = 0; x < k; x++)
        {
            if (B[j] == C[x])
            {
                isduplicate = true;
            }
        }
        if (isduplicate == false)
        {

            C[k] = B[j];
            k++;
        }
    }

    for (int y = 0; y < 10; y++)
    {
        cout << C[y] << " ";
    }

    return 0;
}