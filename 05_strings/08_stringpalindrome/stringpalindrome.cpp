#include <iostream>
using namespace std;

// a palindrome string is just a string which is same when reversed
int main()
{
    char A[] = "madam";
    bool flag = true;
    int j = 0;
    for (; A[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (int i = 0; i < j; i++, j--)
    {
        if (A[i] != A[j])
        {
            cout << "not palindrome";
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "paldindrome";
    }
    return 0;
}