#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int vcount = 0;
    int Ccount = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {

        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
        {
            vcount++;
        }
        else if (A[i] >= 65 && A[i] <= 90 || A[i] >= 97 && A[i] <= 122)
        {
            Ccount++;
        }
    }
    cout << vcount << " " << Ccount;
    return 0;
}