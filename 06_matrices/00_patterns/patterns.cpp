#include <iostream>
using namespace std;

int main()
{
    int v1 = 2;
    int v2 = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= v1 && j <= v2)
            {
                cout << 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        v1--;
        v2++;
    }

    return 0;
}