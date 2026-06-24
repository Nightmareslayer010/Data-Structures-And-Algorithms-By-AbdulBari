#include <iostream>
using namespace std;

struct coordinateList
{
    int row;
    int col;
    int value;
};

class sparseMatrix
{
private:
    coordinateList *A;
    int m;
    int n;
    int totalElements;
    int currentIndex;

public:
    sparseMatrix();
    sparseMatrix(int m, int n, int totalElements);
    sparseMatrix(const sparseMatrix &copym);
    ~sparseMatrix();
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    sparseMatrix add(const sparseMatrix &B);
    void display();
};
sparseMatrix::sparseMatrix()
{
    A = nullptr;
    m = 0;
    n = 0;
    totalElements = 0;
    currentIndex = 0;
}
sparseMatrix::sparseMatrix(int m, int n, int totalElements)
{ // saving
    this->m = m;
    this->n = n;
    this->totalElements = totalElements;
    this->currentIndex = 0;
    // allocation
    A = new coordinateList[totalElements];
}
sparseMatrix::sparseMatrix(const sparseMatrix &copym)
{
    // copy all variables
    this->m = copym.m;
    this->n = copym.n;
    this->totalElements = copym.totalElements;
    this->currentIndex = copym.currentIndex;

    // a new copy of array and coordinatelist
    this->A = new coordinateList[this->totalElements];
    // copy all elements into this new object
    for (int k = 0; k < copym.currentIndex; k++)
    {
        this->A[k] = copym.A[k];
    }
}
sparseMatrix::~sparseMatrix()
{
    delete[] A;
    cout << "memory freed" << endl;
    cout << endl;
    ;
}
void sparseMatrix::setElement(int i, int j, int value)
{
    if (value == 0)
        return;

    if (i >= 0 && i < m && j >= 0 && j < n && currentIndex < totalElements)
    {
        A[currentIndex].row = i;
        A[currentIndex].col = j;
        A[currentIndex].value = value;
        currentIndex++;
    }
    else
    {
        cout << "index out of bounds" << endl;
    }
}
int sparseMatrix::getElement(int i, int j)
{
    if (i >= 0 && i < m && j >= 0 && j < n)
    {
        for (int k = 0; k < currentIndex; k++)
        {
            if (A[k].row == i && A[k].col == j)
            {
                return A[k].value;
            }
        }
        return 0;
    }
    else
    {
        return -1;
    }
}

sparseMatrix sparseMatrix::add(const sparseMatrix &B)
{
    // check if dimensions are same
    if (this->m != B.m || this->n != B.n)
    {
        cout << "dimensions must be same" << endl;
        return sparseMatrix(0, 0, 0);
    }
    // Create a matrix C with combined size of A and b
    int totalSize = this->currentIndex + B.currentIndex;
    sparseMatrix C(this->m, this->n, totalSize);

    // pointers for traversal
    int i = 0;
    int j = 0;

    // compare and add logic
    while (i < this->currentIndex && j < B.currentIndex)
    {
        // if both equal
        if (this->A[i].row == B.A[j].row && this->A[i].col == B.A[j].col)
        {
            int sum = this->A[i].value + B.A[j].value;
            C.setElement(this->A[i].row, this->A[i].col, sum);
            i++;
            j++;
        }
        // if A is smaller
        else if (this->A[i].row <= B.A[j].row && this->A[i].col < B.A[j].col)
        {
            C.setElement(this->A[i].row, this->A[i].col, this->A[i].value);
            i++;
        }
        else
        {
            C.setElement(B.A[j].row, B.A[j].col, B.A[j].value);
            j++;
        }
    }
    // cleanup loops if elements remain in either A or B
    while (i < this->currentIndex)
    {
        C.setElement(this->A[i].row, this->A[i].col, A[i].value);
        i++;
    }
    while (j < B.currentIndex)
    {
        C.setElement(B.A[j].row, B.A[j].col, B.A[j].value);
    }
    return C;
}

void sparseMatrix::display()
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k < currentIndex && A[k].row == i && A[k].col == j)
            {
                cout << A[k].value << " ";
                k++;
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // take dimensions as input
    int m;
    int n;
    int totalElements;
    cout << "Enter Dimensions: " << endl;
    cin >> m >> n;
    while (m <= 0 || n <= 0)
    {
        cout << "Dimensions cant be less than or equal to 0" << endl;
        cin >> m >> n;
    }
    cout << endl;

    // setup matrix 1
    cout << "enter total elements for A: " << endl;
    cin >> totalElements;
    while (totalElements <= 0)
    {
        cout << "total elements cant be 0 or less than 0" << endl;
        cin >> totalElements;
    }
    sparseMatrix m1(m, n, totalElements);
    for (int i = 0; i < totalElements; i++)
    {
        int r, c, value;
        cout << "enter row columns and values" << endl;
        cin >> r >> c >> value;
        m1.setElement(r, c, value);
    }

    // setup matrix 2
    cout << "Enter total elements for B: " << endl;
    cin >> totalElements;
    while (totalElements <= 0)
    {
        cout << "total elements cant be less than or equal to 0" << endl;
        cin >> totalElements;
    }
    sparseMatrix m2(m, n, totalElements);
    for (int i = 0; i < totalElements; i++)
    {
        int r, c, value;
        cout << "enter row column and values: " << endl;
        cin >> r >> c >> value;
        m2.setElement(r, c, value);
    }

    // addition
    sparseMatrix m3 = m1.add(m2);
    // displaying all matrices

    cout << "matrix 1 " << endl;
    m1.display();
    cout << endl;

    cout << "matrix 2 " << endl;
    m2.display();
    cout << endl;

    cout << "matrix 3 " << endl;
    m3.display();
    cout << endl;

    return 0;
}