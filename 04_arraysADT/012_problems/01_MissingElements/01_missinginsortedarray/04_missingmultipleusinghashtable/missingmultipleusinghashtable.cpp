#include <iostream>
using namespace std;

int main()
{
    int A[] = {4, 5, 6, 9, 11, 12, 13, 15};
    int H[16] = {0};
    for (int i = 0; i < 8; i++)
    {

        H[A[i]] = 1;
    }
    for (int j = 4; j <= 15; j++)
    {
        if (H[j] == 0)
        {
            cout << j << endl;
        }
    }
    return 0;
}