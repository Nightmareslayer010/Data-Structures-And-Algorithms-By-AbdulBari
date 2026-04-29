#include <iostream>
using namespace std;

/* In C++, structures (structs) are user-defined data
types that allow you to group different types of variables
under one name. */

struct Rectangle
{
    int length;
    int breadth;
    char x;
};
int main()
{
    struct Rectangle r1 = {10, 5};
    r1.length = 4;
    r1.breadth = 5;
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}