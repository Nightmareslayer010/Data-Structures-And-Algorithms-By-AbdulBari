#include <iostream>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    int i = 0;
    int j = 0;
    for (; A[i] != '\0' || B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            cout << "not equal" << endl;
            break;
        }
    }
    if (A[i] == B[j])
    {
        cout << "equal";
    }
    else if (A[i] > B[j])
    {
        cout << B << " comes first";
    }
    else
    {
        cout << A << " comes first";
    }

    return 0;
}