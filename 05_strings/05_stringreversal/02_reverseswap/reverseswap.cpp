#include <iostream>
using namespace std;

void swap(char *x, char *y)
{

    if (x == y)
        return;
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main()
{
    char A[] = "volugamer";
    int i = 0;
    int j = 0;
    for (; A[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }

    cout << A;

    return 0;
}