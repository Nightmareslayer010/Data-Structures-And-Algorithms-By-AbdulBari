#include <iostream>
using namespace std;

int main()
{
    int A[5] = {3, 4, 5, 6, 10};
    int B[5] = {2, 4, 5, 7, 12};
    int C[10];
    int i = 0, j = 0, k = 0;

    for (; i < 5 && j < 5;)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] == B[j])
        {
            C[k] = A[i];
            i++;
            j++;
            k++;
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