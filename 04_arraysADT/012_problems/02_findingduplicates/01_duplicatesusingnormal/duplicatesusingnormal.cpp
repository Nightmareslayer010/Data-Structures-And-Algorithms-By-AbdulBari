#include <iostream>
using namespace std;

int main()
{

    int n = 7;
    int A[] = {12, 13, 12, 15, 17, 18, 13};
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (A[i] != -1)
        {

            for (int j = i + 1; j < n; j++)
            {

                if (A[i] == A[j])
                {
                    A[j] = -1;
                    count++;
                }
            }
            if (count > 1)
            {
                cout << A[i] << " appeared " << count << " times" << endl;
            }
        }
    }

    return 0;
}