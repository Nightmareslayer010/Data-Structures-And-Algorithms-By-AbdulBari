#include <iostream>
using namespace std;

int main()
{
    char name[] = "volugamer";
    char reversename[10];
    int i = 0;
    for (; name[i] != '\0'; i++)
    {
    }
    int j = 0;
    for (i = i - 1; i >= 0; i--, j++)
    {
        reversename[j] = name[i];
    }
    reversename[j] = '\0';
    cout << reversename;

    return 0;
}