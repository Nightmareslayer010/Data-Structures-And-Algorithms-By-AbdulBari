#include <iostream>
using namespace std;

// not advisable to use
// uses references directly no need of pointers
// the function is not created seperately becomes part of main itself
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);

    return 0;
}