#include <iostream>
using namespace std;

class lowerTriangular
{
private:
    int *A;
    int n;

public:
    // constructors
    lowerTriangular();
    lowerTriangular(int n);
    ~lowerTriangular();
    //  setter and getter
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
lowerTriangular::lowerTriangular()
{
    n = 0;
    A = nullptr;
}
lowerTriangular::lowerTriangular(int n)
{
    this->n = n;
    // n(n+1)/2+j
    int size = ((n * (n + 1)) / 2) + 0;
    A = new int[size]();
}
lowerTriangular::~lowerTriangular()
{

    delete[] A;
    cout << "memory freed";
}
void lowerTriangular::setElement(int i, int j, int value)
{
    if (i >= 0 && i < n && j >= 0 && j < n && j <= i)
    {
        int elementIndex = ((i * (i + 1)) / 2) + j;
        A[elementIndex] = value;
    }
    else
    {
        cout << "invalid indexes";
    }
}
int lowerTriangular::getElement(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n && j <= i)
    {
        int elementIndex = ((i * (i + 1)) / 2) + j;
        return A[elementIndex];
    }
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        return 0;
    }
    return -1;
}
void lowerTriangular::display()
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
    cout << "enter dimension: ";
    cin >> n;
    while (n < 2)
    {
        cout << "dimensions must be greater than 2";
        cin >> n;
    }
    lowerTriangular t1(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                cout << "enter value for " << i << " " << j << ":  ";
                cin >> value;
                t1.setElement(i, j, value);
            }
        }
    }

    cout << t1.getElement(1, 1) << endl;
    return 0;
}