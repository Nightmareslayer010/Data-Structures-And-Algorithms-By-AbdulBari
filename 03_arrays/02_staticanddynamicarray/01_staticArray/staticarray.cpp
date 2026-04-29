#include <iostream>
using namespace std;

// static arrays
// size determined at compiled time before
// program runs

int main()
{
    int A[5] = {2, 4, 6, 8, 10};

    int n = 5; // total elements not index just total elements

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

        return 0;
}