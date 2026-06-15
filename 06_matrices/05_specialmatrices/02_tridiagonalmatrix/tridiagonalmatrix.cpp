#include <iostream>
using namespace std;

class triDiagonal
{
private:
    int *A;
    int n;

public:
    // constructor and destructor
    triDiagonal();
    triDiagonal(int n);
    ~triDiagonal();
    // setter and getter
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
triDiagonal::triDiagonal()
{
    n = 0;
    A = nullptr;
}
triDiagonal::triDiagonal(int n)
{
    this->n = n;
    int size = (3 * n) - 2;
    A = new int[size]();
}
triDiagonal::~triDiagonal()
{
    delete[] A;
    cout << "memory freed";
}
void triDiagonal::setElement(int i, int j, int value)
{

    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (i - j == -1)
        {
            A[i] = value;
        }
        else if (i - j == 0)
        {
            A[n - 1 + i] = value;
        }
        else if (i - j == 1)
        {
            A[2 * n - 1 + j] = value;
        }
        else
        {
            cout << "cant save non zero elements in trigonal matrix for this index" << endl;
        }
    }

    else
    {
        cout << "index out of bounds" << endl;
    }
}
int triDiagonal::getElement(int i, int j)
{

    if (i >= 0 && j >= 0 && i < n && j < n)
    {
        if (i - j == -1)
        {
            return A[i];
        }
        else if (i - j == 0)
        {
            return A[n - 1 + i];
        }
        else if (i - j == 1)
        {
            return A[2 * n - 1 + j];
        }
        else
        {
            return 0;
        }
    }
    return -1;
}
void triDiagonal::display()
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
    cout << "enter order of the matrix: ";
    cin >> n;
    while (n < 3)
    {
        cout << "tridiagonal matrix order cant be less than 3" << endl;
        cin >> n;
    }
    triDiagonal d1(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j >= -1 && i - j <= 1)
            {
                cout << "enter element for: " << i << " " << j << endl;
                cin >> value;
                d1.setElement(i, j, value);
            }
        }
    }
    cout << " get elements for 2,2: " << d1.getElement(2, 2) << endl;
    d1.display();
    return 0;
}