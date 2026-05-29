#include <iostream>
using namespace std;

void perm(char *A, int k)
{
    static int flag[10] = {0};
    static char result[10];

    if (A[k] == '\0')
    {
        result[k] = '\0';
        cout << result << endl;
    }
    else
    {
        for (int i = 0; A[i] != '\0'; i++)
        {
            if (flag[i] == 0)
            {
                flag[i] = 1;
                result[k] = A[i];
                perm(A, k + 1);
                flag[i] = 0;
            }
        }
    }
}

int main()
{
    char A[] = "ABC";
    perm(A, 0);

    return 0;
}