#include <iostream>
using namespace std;
int main()
{
    int i, j, space;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = 2 * 5 - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = 2 * 5 - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}