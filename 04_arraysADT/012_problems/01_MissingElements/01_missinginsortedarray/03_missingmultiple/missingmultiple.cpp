#include <iostream>
using namespace std;

int main()
{
    int A[] = {5, 6, 7, 8, 10, 11, 12, 14, 17};
    int difference = A[0] - 0;
    for (int i = 0; i < 9; i++)
    {
        if (A[i] - i != difference)
        {
            while (difference < A[i] - i)
            {
                cout << "missing element" << difference + i << endl;
                difference++;
            }
        }
    }
    cout << endl;

    return 0;
}