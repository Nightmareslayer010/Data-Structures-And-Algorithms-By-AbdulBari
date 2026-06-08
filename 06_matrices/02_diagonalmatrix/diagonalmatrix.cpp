#include <iostream>
using namespace std;

class Diagonal
{
private:
    int *A;
    int n;

public:
    // constructors
    Diagonal();
    Diagonal(int n);
    ~Diagonal();
    // setter and getter
    void setElement(int i, int j, int value);
    int getElement(int i, int j);
    // display
    void display();
};
Diagonal::Diagonal()
{
    n = 2;
    A = new int[n]();
}
Diagonal::Diagonal(int n)
{
    if (n > 0)
    {

        this->n = n;
        A = new int[n];
    }
}
Diagonal::~Diagonal()
{

    delete[] A;
    cout << "memory freed";
}
void Diagonal::setElement(int i, int j, int value)
{
    if (i == j && i >= 0 && i < n && j >= 0 && j < n)
    {
        A[i] = value;
    }
    else
    {
        cout << "set indexes invalid" << endl;
    }
}
int Diagonal::getElement(int i, int j)
{

    if (i == j && i >= 0 && i < n && j >= 0 && j < n)
    {
        return A[i];
    }
    return 0;
}
void Diagonal::display()
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i];
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}
int main()
{

    Diagonal d1(4);
    d1.setElement(0, 0, 1);
    d1.setElement(1, 1, 1);
    d1.setElement(2, 2, 1);
    d1.setElement(3, 3, 1);

    d1.display();
    cout << endl;

    cout << d1.getElement(3, 3) << endl;

    return 0;
}