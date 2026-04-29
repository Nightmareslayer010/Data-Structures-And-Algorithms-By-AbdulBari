#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 10, 11, 12, 13};
    int B[] = {2, 3, 4, 5, 6};
    int C[10];

    int m = 5;
    int n = 5;
    int i = 0, j = 0, k = 0;

    for (; i < m && j < n;)
    {

        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    for (; i < m; i++)
    {
        C[k] = A[i];
        k++;
    }

    for (; j < n; j++)
    {
        C[k] = B[j];
        k++;
    }

    // My Approach
    //  for (; i < m || j < n;)
    //  {
    //      if (i < m)
    //      {
    //          C[k] = A[i];
    //          i++;
    //          k++;
    //      }
    //      else
    //      {
    //          C[k] = B[j];
    //          j++;
    //          k++;
    //      }
    //  }

    // printing

    for (int l = 0; l < 10; l++)
    {
        cout << C[l] << " ";
    }

    return 0;
}