#include <iostream>
using namespace std;

// arrays cant be passed by value
// but if array is inside structure we can pass by value

struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1)
{

    return r1.length * r1.breadth;
}

int main()
{

    struct Rectangle r = {10, 5};
    cout << area(r) << endl;
}