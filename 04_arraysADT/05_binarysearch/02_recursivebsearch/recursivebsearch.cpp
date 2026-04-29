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
    int Rbsearch(int key);
    int RbsearchUtil(int low, int high, int key);

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
// Recursive Binary Search

int Array::Rbsearch(int key)
{
    return RbsearchUtil(0, length - 1, key);
}
int Array::RbsearchUtil(int low, int high, int key)
{

    if (low <= high)
    {

        int mid = (low + high) / 2;

        if (key == A[mid])
        {

            return mid;
        }
        else if (key < A[mid])
        {
            return RbsearchUtil(low, mid - 1, key);
        }
        else
        {
            return RbsearchUtil(mid + 1, high, key);
        }
    }
    return -1;
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

    arr.display();
    int Rbsearch = arr.Rbsearch(20);
    cout << "key found at: " << Rbsearch;

    return 0;
}
