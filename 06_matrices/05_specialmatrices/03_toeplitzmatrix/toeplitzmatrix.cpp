#include <iostream>
using namespace std;

class toeplitz
{
private:
    int *A;
    int n;

public:
    // constructor and destructor
    toeplitz();
    toeplitz(int n);
    ~toeplitz();
    // set and get
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
toeplitz::toeplitz()
{
    A = nullptr;
    n = 0;
}
toeplitz::toeplitz(int n)
{
    this->n = n;
    int size = 2 * n - 1;
    A = new int[size]();
}
toeplitz::~toeplitz()
{
    delete[] A;
    cout << "memory freed";
}
void toeplitz::setElement(int i, int j, int value)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (j >= i)
        {
            A[j - i] = value;
        }
        else
        {
            A[n - 1 + i - j] = value;
        }
    }
    else
    {
        cout << "index out of bounds" << endl;
    }
}
int toeplitz::getElement(int i, int j)
{

    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (j >= i)
        {
            return A[j - i];
        }
        else
        {
            return A[n - 1 + i - j];
        }
    }
    else
    {
        cout << "invalid index" << endl;
        return -1;
    }
}
void toeplitz::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << getElement(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    int value;
    cout << "enter order of the matrix " << endl;
    cin >> n;
    while (n < 2)
    {
        cout << "order cant be less than 2" << endl;
        cin >> n;
    }
    toeplitz t1(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == 0)
            {
                cout << "enter value for: " << i << " " << j << endl;
                cin >> value;
                t1.setElement(i, j, value);
            }
        }
    }
    cout << "value for 2,2 is:  " << t1.getElement(2, 2) << endl;
    t1.display();

    return 0;
}