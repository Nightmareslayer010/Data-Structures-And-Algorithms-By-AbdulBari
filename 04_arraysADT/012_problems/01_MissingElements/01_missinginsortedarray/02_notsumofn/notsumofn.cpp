#include <iostream>
using namespace std;

int main()
{

    int A[] = {6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17};

    int low = 6;
    for (int i = 0; i < 11; i++)
    {
        int difference = A[i] - i;
        if (difference != low)
        {
            i = i + low;
            cout << "Missing element " << i << endl;
            break;
        }
    }
    return 0;
}