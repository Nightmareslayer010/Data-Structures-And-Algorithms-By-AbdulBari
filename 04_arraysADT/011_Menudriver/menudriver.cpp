#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    // constructors
    Array()
    {
        A = nullptr;
        size = 0;
        length = 0;
    }
    Array(int s, int l)
    {
        size = s;
        length = l;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
        cout << endl;
        cout << "Memory Freed" << endl;
    }
};

int main()
{

    return 0;
}