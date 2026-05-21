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
    char A[] = "madam";
    int i = 0;
    int j = 0;
    for (; A[j] != '\0'; j++)
    {
    }
    j = j - 1;
    while (i < j)
    {
        swap(&A[i], &A[j]);
        if (A[i] != A[j])
        {
            cout << "not palindrome" << endl;
            break;
        }
        i++;
        j--;
    }
    if (A[i] == A[j])
    {
        cout << "palindrome";
    }

    return 0;
}