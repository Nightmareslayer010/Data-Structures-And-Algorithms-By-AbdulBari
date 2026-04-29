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
    int IterativeBsearch(int key);

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

// iterative binary search

int Array::IterativeBsearch(int key)
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

    // enter all elements in sorted way we are doing binary search
    cout << "Enter all elements" << endl;
    int input;
    for (int i = 0; i < l; i++)
    {
        cin >> input;
        arr.ArrayInput(i, input);
    }

    // displaying everything
    arr.display();
    int iterativebsearch = arr.IterativeBsearch(20);
    cout << "key found at: " << iterativebsearch;
    return 0;
}
