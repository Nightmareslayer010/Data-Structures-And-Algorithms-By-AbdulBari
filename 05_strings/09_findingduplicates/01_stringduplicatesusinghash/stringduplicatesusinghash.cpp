#include <iostream>
using namespace std;

int main()
{
    char A[] = "finding";
    int H[26] = {0};
    for (int i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (H[j] > 1)
        {
            cout << (char)(j + 97) << " " << H[j] << endl;
        }
    }

    return 0;
}