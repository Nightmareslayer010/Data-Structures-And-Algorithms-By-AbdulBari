#include <iostream>
using namespace std;

int main()
{
    char A[] = "caal";
    char B[] = "call";
    int H[26] = {0};
    int lenA = 0;
    int lenB = 0;
    bool flag = true;
    while (A[lenA] != '\0')
        lenA++;
    while (B[lenB] != '\0')
        lenB++;

    if (lenA == lenB)
    {
        for (int i = 0; A[i] != '\0'; i++)
        {
            H[A[i] - 97] += 1;
        }
        for (int j = 0; B[j] != '\0'; j++)
        {
            H[B[j] - 97] -= 1;
            if (H[B[j] - 97] < 0)
            {
                cout << " not anagram";
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "anagram";
        }
    }
    else
    {
        cout << " not anagram";
    }
    return 0;
}