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
    void ArrayAppend(int x);

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
// append
void Array::ArrayAppend(int x)
{

    if (length < size)
    {
        A[length] = x;
        length++;
    }
    else
    {

        cout << "size is full cant be appended" << endl;
    }
}

// display
void Array::display()
{

    cout << "size is: " << size << endl;
    cout << "length is " << length << endl;

    for (int i = 0; i < length; i++)
    {

        cout << A[i] << " ";
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

    /* appending means isnerting at the end */

    // displaying everything

    arr.ArrayAppend(6);
    arr.display();

    return 0;
}
