#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;   // actual capacity
    int length; // number of elements present currently

public:
    // constructors default and param
    Array();
    Array(int s, int l);
    ~Array();

    // functions
    void ArrayInput(int i, int input);
    void ArrayInsert(int index, int x);

    // display
    void display();
};

// constructors and destructors

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
};

// input

void Array::ArrayInput(int i, int input)
{

    A[i] = input;
}
// insert

void Array::ArrayInsert(int index, int x)
{

    if (index >= 0 && index <= length && length < size)
    {

        for (int i = length; i > index; i--)
        {

            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
    else
    {

        if (index > length)
        {

            cout << "index cant be inserted due to continuity" << endl;
        }
        else if (length >= size)
        {

            cout << "no space for insertion" << endl;
        }
    }
}

// display
void Array::display()
{

    cout << "size is: " << size << endl;
    cout << "length is " << length << endl;

    for (int i = 0; i < length; i++)
    {

        cout << A[i] << endl;
    }
}

// main function
int main()
{
    int s, l;
    // size and n is number of elements

    // size
    cout << "Enter size" << endl;
    cin >> s;

    // number of elements
    cout << "enter number of elememts" << endl;
    cin >> l;

    while (l > s)
    {
        cout << "number of elements cant be greater than: " << s << endl;
        cin >> l;
    }

    Array arr(s, l);

    // enter all elements
    cout << "Enter all elements" << endl;
    int input;
    for (int i = 0; i < l; i++)
    {
        cin >> input;
        arr.ArrayInput(i, input);
    }

    arr.ArrayInsert(2, 19);
    // displaying everything
    arr.display();

    return 0;
}
