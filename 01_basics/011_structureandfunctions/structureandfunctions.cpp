#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void Initialize(struct Rectangle *r1, int l, int b)
{

    r1->length = l;
    r1->breadth = b;
}
int area(Rectangle r)
{
    return r.length * r.breadth;
}

int peri(Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main()
{
    struct Rectangle r = {0, 0};

    int l, b;
    cout << "Enter Length and Breadth" << endl;
    cin >> l >> b;
    Initialize(&r, l, b);

    int a = area(r);
    int p = peri(r);

    cout << "Area: " << a << " " << "Perimeter: " << p << endl;
}
