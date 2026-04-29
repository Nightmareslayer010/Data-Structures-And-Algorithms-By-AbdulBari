#include <iostream>
using namespace std;

/*A monolithic program is a program written as one large block of code without dividing it into functions or modules.
All tasks are performed in a single continuous unit, making it tightly coupled and difficult to maintain.  */

int main()
{

    // its better to initalize variables good practice
    int length = 0;
    int breadth = 0;
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    cout << "area: " << area << endl
         << "peri: " << peri << endl;
    ;

    return 0;
}