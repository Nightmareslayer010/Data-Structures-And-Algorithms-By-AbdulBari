#include <iostream>
using namespace std;

// use debugger and add breakpoint to return 0 to see the arrays

int main()
{

    int A[5];
    int B[5] = {1, 2, 3, 4, 5};
    int C[10] = {2, 4, 6};
    int D[5] = {0};
    int E[] = {1, 2, 3, 4, 5, 6};

    // arrays are contigeous meaning they
    // are stored side by side
    // below is a program which proves that

    for (int i = 0; i < 5; i++)
    {

        cout << (long long)&A[i] << endl;
    }

    return 0;
}