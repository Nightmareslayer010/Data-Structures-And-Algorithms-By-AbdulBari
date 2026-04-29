#include "Array.h"
#include <iostream>
using namespace std;

// Constructor and Destructor Implementation

Array::Array()
{
    size = 0;
    length = 0;
    A = nullptr;
}
Array::Array(int s, int l)
{
    size = s;
    length = l;
    A = new int[size];
}

Array::Array(const Array &arr)
{
    this->size = arr.size;
    this->length = arr.length;
    this->A = new int[arr.size];

    for (int i = 0; i < arr.length; i++)
    {
        this->A[i] = arr.A[i];
    }
}

Array::~Array()
{
    delete[] A;
    cout << endl;
    cout << "Mempory Freed";
}

// helper function Display
void Array::display() const
{

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}