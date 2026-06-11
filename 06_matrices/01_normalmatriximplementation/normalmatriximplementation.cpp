#include <iostream>
using namespace std;

class Matrix
{
private:
    int *A;
    int rows;
    int columns;

public:
    // constructor and destructor
    Matrix();
    Matrix(int r, int c);
    ~Matrix();
    // set and get
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
Matrix::Matrix()
{
    A = nullptr;
    rows = 0;
    columns = 0;
}
Matrix::Matrix(int r, int c)
{
    rows = r;
    columns = c;
    int size = rows * columns;
    A = new int[size]();
}
Matrix::~Matrix()
{

    delete[] A;
    cout << "memory freed";
}
void Matrix::setElement(int i, int j, int value)
{
    if (i >= 0 && i < rows && j >= 0 && j < columns)
    {
        int elementIndex = (i * columns) + j;
        A[elementIndex] = value;
    }
}
int Matrix::getElement(int i, int j)
{
    if (i >= 0 && i < rows && j >= 0 && j < columns)
    {
        int elementIndex = (i * columns) + j;
        return A[elementIndex];
    }
    return -1;
}
void Matrix::display()
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << getElement(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{

    Matrix m1(4, 4);
    // setting element
    m1.setElement(0, 0, 1);
    m1.setElement(1, 1, 1);
    m1.setElement(2, 2, 1);
    m1.setElement(3, 3, 1);

    // displaying entire matrix
    m1.display();

    // getting element
    cout << m1.getElement(3, 3) << endl;
}