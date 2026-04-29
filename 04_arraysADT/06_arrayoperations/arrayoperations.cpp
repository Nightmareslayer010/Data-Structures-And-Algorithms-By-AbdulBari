#include <iostream>
using namespace std;

class Array
{

private:
    int size;
    int length;
    int *A;

public:
    // constructors
    Array();
    Array(int l, int s);
    ~Array();

    // member functions for input and display
    void ArrayInput(int index, int input);
    void display();

    // normal member functions

    int get(int index);
    void set(int index, int value);
    int max();
    int min();
    int sum();
    float avg();
};

Array::Array()
{

    length = 0;
    size = 0;
    A = nullptr;
};
Array::Array(int l, int s)
{
    length = l;
    size = s;
    A = new int[size];
};
Array::~Array()
{
    delete[] A;
    cout << "memory freed";
}
void Array::ArrayInput(int index, int input)
{

    if (index >= 0 && index < size && length <= size)
    {

        A[index] = input;
    }
    else
    {
        cout << "give valid index" << endl;
    }
};
void Array::display()
{

    cout << "size is: " << size << endl;
    cout << "length is: " << length << endl;

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
};
int Array::get(int index)
{

    if (index >= 0 && index < length)
    {
        return A[index];
    }
    else
    {
        cout << "invalid index fuck off" << endl;
        return -1;
    }
};

void Array::set(int index, int value)
{
    if (index >= 0 && index < length)
    {
        A[index] = value;
    }
};

int Array::max()
{
    int max = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int Array::min()
{
    int min = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int Array::sum()
{

    int sum = 0;
    for (int i = 0; i <= length; i++)
    {

        sum = sum + i;
    }
    return sum;
}

float Array::avg()
{

    int sum = 0;
    for (int i = 0; i <= length; i++)
    {

        sum = sum + i;
    }
    return sum / 2;
}

int main()
{

    int s, l;
    cout << "enter size" << endl;
    cin >> s;
    cout << "enter length" << endl;
    cin >> l;
    while (l > s)
    {
        cout << "length cant be greater than size" << endl;
        cout << "enter length again" << endl;
    }
    Array arr(l, s);
    int input;
    cout << "Enter elements" << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> input;
        arr.ArrayInput(i, input);
    }
    // arr.display();

    // set -> set value at a particular index
    arr.set(3, 69);

    // get the value of particular index
    int getindex = arr.get(3);
    cout << "the value at given index is:" << getindex << endl;

    // findding max
    cout << " max in the array is: " << arr.max() << endl;

    // finding min
    cout << " min in the array is: " << arr.min() << endl;

    // finding sum
    cout << "the sum is: " << arr.sum() << endl;

    // finding avg
    cout << " the avg is: " << arr.avg() << endl;

    return 0;
}