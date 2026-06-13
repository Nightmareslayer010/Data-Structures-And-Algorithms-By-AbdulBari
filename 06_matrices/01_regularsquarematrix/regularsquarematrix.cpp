#include <iostream>
using namespace std;

class squareMatrix
{
private:
    int *A;
    int n;

public:
    // constructors and destructor
    squareMatrix();
    squareMatrix(int n);
    ~squareMatrix();
    // setter and getter
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
squareMatrix::squareMatrix()
{
    A = nullptr;
    n = 0;
}
squareMatrix::squareMatrix(int n)
{
    this->n = n;
    int size = n * n;
    A = new int[size]();
}
squareMatrix::~squareMatrix()
{
    delete[] A;
    cout << "memory freed" << endl;
}
void squareMatrix::setElement(int i, int j, int value)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        int elementIndex = (i * n) + j;
        A[elementIndex] = value;
    }
    else
    {
        cout << "invalid index";
    }
}
int squareMatrix::getElement(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        int elementIndex = (i * n) + j;
        return A[elementIndex];
    }
    else
    {
        cout << "invalid index" << endl;
        return -1;
    }
}
void squareMatrix::display()
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
    cout << "enter order of the matrix" << endl;
    cin >> n;
    while (n < 2)
    {
        cout << "order cant be less than 2";
        cin >> n;
    }
    squareMatrix m1(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter value for " << i << " and  " << j << endl;
            cin >> value;
            m1.setElement(i, j, value);
        }
    }

    cout << m1.getElement(0, 1) << endl;
    cout << endl;
    m1.display();

    return 0;
}