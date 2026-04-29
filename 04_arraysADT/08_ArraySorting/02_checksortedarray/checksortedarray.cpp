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

    bool checkSortedArray();
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

bool Array::checkSortedArray()
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
    cout << "enter values" << endl;
    for (int i = 0; i < l; i++)
    {

        cin >> values;
        arr.ArrayInput(i, values);
    }

    cout << arr.checkSortedArray();
}