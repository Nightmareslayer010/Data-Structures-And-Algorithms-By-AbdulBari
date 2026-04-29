#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length;
    int breadth;

public:
    //  constructors
    Rectangle() { length = 1, breadth = 1; }
    Rectangle(int l, int b);
    // functions
    int area();
    int perimeter();
    // getter and setter
    int getlength() { return length; }
    void setlength(int l) { length = l; }
    // destructor
    ~Rectangle();
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle::~Rectangle() {}

int main()
{
    Rectangle r(5, 6);
    cout << r.getlength() << endl;
    r.setlength(7);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}
