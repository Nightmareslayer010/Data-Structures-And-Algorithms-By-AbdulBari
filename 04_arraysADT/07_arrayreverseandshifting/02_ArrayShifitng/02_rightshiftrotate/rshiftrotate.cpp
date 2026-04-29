#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int length = 7;

    for (int m = 0; m < k; m++)
    {
        int rotate = nums[length - 1];

        for (int i = length - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = rotate;

        // output
        for (int j = 0; j < length; j++)
        {
            cout << nums[j] << "";
        }
        cout << endl;
    }
    return 0;
}