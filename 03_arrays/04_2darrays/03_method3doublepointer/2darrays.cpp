#include <iostream>
using namespace std;

int main()
{

    // double pointer
    int **A;

    /* double pointer pointing to array
    of pointers located in heap */
    A = new int *[3];

    /* array of pointers pointinf to rows
    located in heap */

    // row in heap and row elements also in heap

    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}