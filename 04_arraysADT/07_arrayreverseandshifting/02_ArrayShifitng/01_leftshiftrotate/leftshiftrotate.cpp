#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 2, 3};
    int length = 3;
    int rotate;
    int kth = 2;

    for (int i = 0; i < kth; i++)
    {
        rotate = A[0];

        for (int j = 0; j < length - 1; j++)
        {
            A[j] = A[j + 1];
        }
        A[length - 1] = rotate;

        for (int k = 0; k < length; k++)
        {
            cout << A[k] << " ";
        }
        cout << " " << endl;
    }

    return 0;
}