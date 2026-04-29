#include <iostream>
using namespace std;

/* Modular Programming is a programming approach where a
 large program is divided into smaller, independent,
 reusable modules (functions). */

// also called as functional or procedural programming

// let the user interaction be done by main function
// processing by seperate functions

int area(int l, int b)
{
    return l * b;
}

int perimeter(int l, int b)
{
    return 2 * (l + b);
}

int main()
{

    int length = 0, breadth = 0;
    cout << "Enter Length and Breath" << endl;
    cin >> length >> breadth;

    int a = area(length, breadth);
    int p = perimeter(length, breadth);

    cout << "Area: " << a << " " << "Perimeter: " << p << endl;
}