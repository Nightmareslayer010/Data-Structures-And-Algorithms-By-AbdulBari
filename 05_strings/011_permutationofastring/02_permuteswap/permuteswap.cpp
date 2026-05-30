#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
void permswap(char *A, int l, int h)
{
    if (l == h)
    {
        cout << A << endl;
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(A[i], A[l]);
            permswap(A, l + 1, h);
            swap(A[i], A[l]);
        }
    }
}

int main()
{
    char A[] = "ABC";
    int l = 0;
    int h = 0;
    while (A[h] != '\0')
        h++;
    h = h - 1;
    permswap(A, l, h);
}