#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct Rectangle *p)
{
    p->length = 25;
    cout << p->length << " " << p->breadth << endl;
}
int main()
{
    struct Rectangle r = {10, 5};
    changeLength(&r);
    return 0;
}