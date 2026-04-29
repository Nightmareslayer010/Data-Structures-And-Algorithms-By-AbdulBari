#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    struct Rectangle r = {10, 5};
    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    // when using pointer to a structure object you have to use "->"

    return 0;
}