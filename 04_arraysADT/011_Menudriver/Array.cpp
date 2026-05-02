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
    cout << "Mempory Freed" << endl;
}

// helper function Display
void Array::display() const
{

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << endl;
}
// accessor
int Array::get(int index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
    return -1;
}
// mutator
void Array::set(int index, int value)
{
    if (index >= 0 && index < length)
    {
        A[index] = value;
    }
    else
    {
        cout << "index out of bounds" << endl;
    }
}
// facilitator
void Array::append(int value)
{

    if (length < size)
    {
        A[length] = value;
        length++;
    }
    else
    {
        cout << "Not Enough Length to append" << endl;
    }
}

void Array::insert(int index, int value)
{
    if (index >= 0 && index <= length && length < size)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = value;
        length++;
    }
    else
    {
        cout << "Index out of Bounds" << endl;
    }
}
void Array::Delete(int index)
{
    if (index >= 0 && index < length)
    {
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    else
    {
        cout << "Index out of Bounds" << endl;
    }
}

void Array::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Array::lSearch(int key)
{

    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            swap(&A[i], &A[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

int Array::bSearch(int key)
{

    int low = 0;
    int high = length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int Array::rBsearch(int key)
{
    int low = 0;
    int high = length - 1;
    return bSearchHelper(low, high, key);
}

int Array::bSearchHelper(int low, int high, int key)
{
    int mid = (low + high) / 2;
    if (low > high)
    {
        return -1;
    }
    else
    {
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            return bSearchHelper(low, mid - 1, key);
        }
        else
        {
            return bSearchHelper(mid + 1, high, key);
        }
    }
}
int Array::max()
{
    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        };
    }
    return max;
}
int Array::min()
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }
    return min;
}
int Array::sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    return sum;
}
int Array::avg()
{
    int sum = 0;
    float total = length;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    return (float)sum / total;
}
void Array::reverseNormal()
{
    int *B = new int[length];
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (int j = 0; j < length; j++)
    {
        A[j] = B[j];
    }
    delete[] B;
}
void Array::reverseSwap()
{
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }
}
void Array::insertInSorted(int value)
{
    if (length < size)
    {
        int i = length;
        for (; i > 0 && value < A[i - 1]; i--)
        {
            A[i] = A[i - 1];
        }
        A[i] = value;
        length++;
    }
    else
    {
        cout << "not enough capacity to insert" << endl;
    }
}

bool Array::isSorted()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }
    return true;
}

void Array::reArrange()
{
    for (int i = 0, j = 0; i < length;)
    {

        if (A[i] > 0)
        {
            i++;
        }
        else
        {
            swap(&A[i], &A[j]);
            j++;
            i++;
        }
    }
}
void Array::lShiftRotate(int k)
{
    k = k % length;
    if (k < 0)
    {
        k = k + length;
    }
    for (int x = 0; x < k; x++)
    {
        int temp = A[0];
        for (int i = 0; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = temp;
    }
}

void Array::rShiftRotate(int k)
{
    k = k % length;
    if (k < 0)
    {
        k = k + length;
    }
    for (int x = 0; x < k; x++)
    {
        int temp = A[length - 1];
        for (int i = length - 1; i > 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = temp;
    }
}
Array Array::Merge(Array &arr2)
{

    int i = 0;
    int j = 0;
    int k = 0;

    Array arr3(this->length + arr2.length, 0);

    while (i < this->length && j < arr2.length)
    {
        if (this->A[i] <= arr2.A[j])
        {
            arr3.A[k] = this->A[i];
            i++;
            k++;
        }
        else
        {
            arr3.A[k] = arr2.A[j];
            j++;
            k++;
        }
    }
    for (; i < this->length; i++)
    {
        arr3.A[k] = this->A[i];
        k++;
    }
    for (; j < arr2.length; j++)
    {
        arr3.A[k] = arr2.A[j];
        k++;
    }
    arr3.length = this->length + arr2.length;

    return arr3;
}
Array Array::Union(Array &arr2)
{

    int i = 0;
    int j = 0;
    int k = 0;

    Array arr3(this->length + arr2.length, 0);

    while (i < this->length && j < arr2.length)
    {
        if (this->A[i] < arr2.A[j])
        {
            arr3.A[k] = this->A[i];
            i++;
            k++;
        }
        else if (this->A[i] > arr2.A[j])

        {
            arr3.A[k] = arr2.A[j];
            k++;
            j++;
        }
        else
        {
            arr3.A[k] = this->A[i];
            i++;
            j++;
            k++;
        }
    }
    for (; i < this->length; i++)
    {
        arr3.A[k] = this->A[i];
        k++;
    }
    for (; j < arr2.length; j++)
    {
        arr3.A[k] = arr2.A[j];
        k++;
    }
    arr3.length = k;
    return arr3;
}

Array Array::Intersection(Array &arr2)
{
    int i = 0;
    int k = 0;
    int j = 0;

    Array arr3(this->length + arr2.length, 0);
    while (i < this->length && j < arr2.length)
    {
        if (this->A[i] < arr2.A[j])
        {
            i++;
        }
        else if (this->A[i] == arr2.A[j])
        {
            arr3.A[k] = this->A[i];
            i++;
            j++;
            k++;
        }
        else
        {
            j++;
        }
    }

    arr3.length = k;
    return arr3;
}
Array Array::Difference(Array &arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    Array arr3(this->length + arr2.length, 0);
    while (i < this->length && j < arr2.length)
    {
        if (this->A[i] < arr2.A[j])
        {
            arr3.A[k] = A[i];
            i++;
            k++;
        }
        else if (this->A[i] == arr2.A[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for (; i < this->length; i++)
    {
        arr3.A[k] = this->A[i];
        k++;
    }

    arr3.length = k;
    return arr3;
}
