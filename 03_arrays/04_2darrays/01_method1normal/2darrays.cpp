#include <iostream>
using namespace std;

int main()
{
    // number of rows are 3
    // number of sapce inside each row is 4

    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // traversing

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