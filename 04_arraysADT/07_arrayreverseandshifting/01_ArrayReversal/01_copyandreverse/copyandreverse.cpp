#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;   // actual capacity
    int length; // number of elements present currently
    int *B;

public:
    // constructors default and param
    Array();
    Array(int s, int l);
    ~Array();

    // functions
    void ArrayInput(int i, int input);
    void ArrayReverse();

    // display
    void display();
};

// constructors and destructors

Array::Array()
{
    size = 0;
    length = 0;
    A = nullptr;
    B = nullptr;
}
Array::Array(int s, int l)
{

    size = s;
    length = l;
    A = new int[size];
    B = new int[size];
}

Array::~Array()
{
    delete[] A;
    delete[] B;
};

// input

void Array::ArrayInput(int i, int input)
{

    A[i] = input;
}
// Array Reversal Method 1

void Array::ArrayReverse()
{

    // copy the reverse array A into array B

    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }

    // checking if b has reverse positions of A
    for (int i = 0; i < length; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // copy B into A
    for (int i = 0; i < length; i++)
    {
        A[i] = B[i];
    }

    // checking if A is reversed

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
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

    // displaying everything
    arr.ArrayReverse();

    return 0;
}
