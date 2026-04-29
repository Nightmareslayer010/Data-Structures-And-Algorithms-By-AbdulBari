#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int T;
    T = *x;
    *x = *y;
    *y = T;
}

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
    int LinearSearch(int key);

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
// Linear Search
int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {

        if (key == A[i])
        {

            if (i > 0)
            {

                // A[i-1] for transposition
                swap(&A[i], &A[i - 1]);
                return i - 1;
            }
            return 0;
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
    // Linear Search
    int lsearch = arr.LinearSearch(9);
    cout << lsearch << endl;

    // arr.display();

    return 0;
}
