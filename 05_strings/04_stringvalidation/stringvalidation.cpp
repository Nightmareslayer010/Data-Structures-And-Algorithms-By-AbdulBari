#include <iostream>
using namespace std;

int stringvalidate(char *p)
{
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 48 && p[i] <= 57 || p[i] >= 65 && p[i] <= 90 || p[i] >= 97 && p[i] <= 122)
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    char password[] = "abc123";
    int r = stringvalidate(password);
    if (r == true)
    {
        cout << "string valid";
    }
    else
    {
        cout << "string invalid";
    }

    return 0;
}