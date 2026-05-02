#include "Array.h"
#include <iostream>
using namespace std;

// Constructor and Destructor Implementation
template <class T>
Array<T>::Array()
{
    size = 0;
    length = 0;
    A = nullptr;
}
template <class T>

Array<T>::Array(int s, int l)
{
    size = s;
    length = l;
    A = new T[size];
}
template <class T>

Array<T>::Array(const Array<T> &arr)
{
    this->size = arr.size;
    this->length = arr.length;
    this->A = new T[arr.size];

    for (int i = 0; i < arr.length; i++)
    {
        this->A[i] = arr.A[i];
    }
}
template <class T>

Array<T>::~Array()
{
    delete[] A;
    cout << endl;
    cout << "Mempory Freed" << endl;
}

// helper function Display
template <class T>

void Array<T>::display() const
{

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << endl;
}
// accessor
template <class T>

int Array<T>::get(int index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
    return -1;
}
// mutator
template <class T>

void Array<T>::set(int index, T value)
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
template <class T>

void Array<T>::append(T value)
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
template <class T>

void Array<T>::insert(int index, T value)
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
template <class T>

void Array<T>::Delete(int index)
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
template <class T>

void Array<T>::swap(T *x, T *y)
{
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
template <class T>

int Array<T>::lSearch(T key)
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
template <class T>

int Array<T>::bSearch(T key)
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
template <class T>

int Array<T>::rBsearch(T key)
{
    int low = 0;
    int high = length - 1;
    return bSearchHelper(low, high, key);
}
template <class T>

int Array<T>::bSearchHelper(int low, int high, T key)
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
template <class T>

T Array<T>::max()
{
    T max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (max < A[i])

        {
            max = A[i];
        };
    }
    return max;
}
template <class T>

T Array<T>::min()
{
    T min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }
    return min;
}
template <class T>

T Array<T>::sum()
{
    T sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    return sum;
}
template <class T>

double Array<T>::avg()
{
    T sum = 0;
    float total = length;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    return (float)sum / total;
}
template <class T>

void Array<T>::reverseNormal()
{
    int *B = new T[length];
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
template <class T>

void Array<T>::reverseSwap()
{
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }
}
template <class T>

void Array<T>::insertInSorted(T value)
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
template <class T>

bool Array<T>::isSorted()
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
template <class T>

void Array<T>::reArrange()
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
template <class T>

void Array<T>::lShiftRotate(int k)
{
    k = k % length;
    if (k < 0)
    {
        k = k + length;
    }
    for (int x = 0; x < k; x++)
    {
        T temp = A[0];
        for (int i = 0; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = temp;
    }
}
template <class T>

void Array<T>::rShiftRotate(int k)
{
    k = k % length;
    if (k < 0)
    {
        k = k + length;
    }
    for (int x = 0; x < k; x++)
    {
        T temp = A[length - 1];
        for (int i = length - 1; i > 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = temp;
    }
}
template <class T>

Array<T> Array<T>::Merge(Array<T> &arr2)
{

    int i = 0;
    int j = 0;
    int k = 0;

    Array<T> arr3(this->length + arr2.length, 0);

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
template <class T>

Array<T> Array<T>::Union(Array<T> &arr2)
{

    int i = 0;
    int j = 0;
    int k = 0;

    Array<T> arr3(this->length + arr2.length, 0);

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
template <class T>

Array<T> Array<T>::Intersection(Array<T> &arr2)
{
    int i = 0;
    int k = 0;
    int j = 0;

    Array<T> arr3(this->length + arr2.length, 0);
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
template <class T>

Array<T> Array<T>::Difference(Array<T> &arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    Array<T> arr3(this->length + arr2.length, 0);
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
