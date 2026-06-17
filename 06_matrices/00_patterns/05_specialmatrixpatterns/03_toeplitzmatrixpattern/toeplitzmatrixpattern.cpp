#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << j - i;
            }
            else if (j < i)
            {
                cout << n - 1 + i - j;
            }
        }
        cout << endl;
    }

    return 0;
}