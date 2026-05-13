#include <iostream>
using namespace std;

int main()
{

    int n = 7;
    int A[] = {12, 13, 12, 15, 17, 18, 13};
    int H[19] = {0};

    for (int i = 0; i < n; i++)
    {
        H[A[i]] = H[A[i]] + 1;
    }
    for (int j = 12; j < 19; j++)
    {
        if (H[j] > 1)
        {
            cout << j << " appeared " << H[j] << " times" << endl;
        }
    }

    return 0;
}