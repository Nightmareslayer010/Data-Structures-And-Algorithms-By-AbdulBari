#include <iostream>
using namespace std;

class upperTriangular
{
private:
    int *A;
    int n;

public:
    // constructor and destructor
    upperTriangular();
    upperTriangular(int n);
    ~upperTriangular();
    // setter and getter
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
upperTriangular::upperTriangular()
{
    A = nullptr;
    n = 0;
}
upperTriangular::upperTriangular(int n)
{
    this->n = n;
    int size = (n * (n + 1)) / 2;
    A = new int[size]();
}
upperTriangular::~upperTriangular()
{
    delete[] A;
    cout << "memory freed";
}
void upperTriangular::setElement(int i, int j, int value)
{
    if (j >= i && j >= 0 && j < n && i >= 0 && i < n)
    {
        int elementIndex = (((2 * n - i + 1) * i) / 2) + (j - i);
        A[elementIndex] = value;
    }
    else
    {
        cout << "invalid index" << endl;
    }
}
int upperTriangular::getElement(int i, int j)
{
    if (j >= i && j >= 0 && j < n && i >= 0 && i < n)
    {
        int elementIndex = (((1 + j) * j) / 2) + i;
        return A[elementIndex];
    }
    else if (j >= 0 && j < n && i >= 0 && i < n)
    {
        return 0;
    }
    return -1;
}
void upperTriangular::display()
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
    while (n < 2)
    {
        cout << "order cant be less than 2: " << endl;
        cin >> n;
    }
    upperTriangular t1(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << "enter value for " << i << " and " << j << ": ";
                cin >> value;
                t1.setElement(i, j, value);
            }
        }
    }
    cout << "value for 3,3 is : " << t1.getElement(3, 3) << endl;
    t1.display();

    return 0;
}