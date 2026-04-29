#include <iostream>
using namespace std;

int main()
{

    int A[10] = {2, 4, 6, 8, 10};
    // using for loop
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << endl;
        ;
    }

    // for each loop
    for (int x : A)
    {
        cout << x << endl;
    }

    // individual valuesa
    cout << A[3] << endl;
}