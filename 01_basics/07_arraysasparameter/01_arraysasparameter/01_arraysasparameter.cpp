#include <iostream>
using namespace std;
// arrays can only be passed by address not as values
// so we can change values of array in a function

void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{

    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    fun(A, n);
}