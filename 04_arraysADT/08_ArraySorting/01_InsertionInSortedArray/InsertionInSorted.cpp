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

    // input
    void ArrayInput(int index, int value);
    // InsertioninaSortedArray

    void SortedInsertion(int value);
};

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

Array::~Array()
{

    delete[] A;
    cout << endl;
    cout << "Memory Freed" << endl;
}

void Array::ArrayInput(int index, int value)
{

    if (index >= 0 && index < length)
    {
        A[index] = value;
    }
    else
    {
        cout << "invalid index" << endl;
    }
}

void Array::SortedInsertion(int value)
{
    if (length < size)
    {
        int i;
        for (i = length; i > 0 && A[i - 1] > value; i--)
        {
            A[i] = A[i - 1];
        }
        A[i] = value;
    }
}

int main()
{
    int s, l;
    cout << "Enter size" << endl;
    cin >> s;
    cout << "Emter length" << endl;
    cin >> l;
    while (l > s)
    {

        cout << "lenght cant be greater than size" << endl;
        cin >> l;
    }
    Array arr(s, l);
    int values;
    cout << "enter values";
    for (int i = 0; i < l; i++)
    {

        cin >> values;
        arr.ArrayInput(i, values);
    }

    arr.SortedInsertion(4);
}